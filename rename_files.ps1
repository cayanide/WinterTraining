$rootDir = "D:\Un-Matrix\WinterTraining\Java\JAVA Code Snipets Implement"

function Rename-Files {
    param (
        [string]$dir
    )

    Get-ChildItem -Path $dir -Recurse | ForEach-Object {
        $newName = $_.Name -replace ' \| ', '_' `
                                 -replace ' – ', '_' `
                                 -replace ' ', '_' `
                                 -replace '\|', '' `
                                 -replace '–', '-'

        if ($_.Name -ne $newName) {
            try {
                $newPath = Join-Path -Path $_.DirectoryName -ChildPath $newName
                Rename-Item -Path $_.FullName -NewName $newPath -Force
                Write-Output "Renamed: $($_.FullName) to $newPath"
            } catch {
                Write-Output "Failed to rename: $($_.FullName)"
            }
        }
    }
}

Rename-Files -dir $rootDir
