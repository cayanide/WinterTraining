import os

def sanitize_path(path):
    return path.replace(" | ", "_").replace(" – ", "_").replace(" ", "_").replace("|", "").replace("–", "-")

def rename_files(root_dir):
    for dirpath, dirnames, filenames in os.walk(root_dir):
        for filename in filenames:
            sanitized_name = sanitize_path(filename)
            if filename != sanitized_name:
                os.rename(os.path.join(dirpath, filename), os.path.join(dirpath, sanitized_name))
        for dirname in dirnames:
            sanitized_name = sanitize_path(dirname)
            if dirname != sanitized_name:
                os.rename(os.path.join(dirpath, dirname), os.path.join(dirpath, sanitized_name))

# Replace 'your_root_directory' with the path to the directory you want to sanitize.
rename_files('your_root_directory')
