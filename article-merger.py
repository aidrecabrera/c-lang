import os

folder_path = r'C:\Users\Svene\.dev\learning\c-lang'
output_file = 'README.md'

def merge_md_files(folder_path, output_file):
    # Get a list of all .md files in the folder
    md_files = [file for file in os.listdir(folder_path) if file.endswith('.md')]

    # Sort the files to ensure a specific order, if needed
    md_files.sort()

    # Open the output file in write mode
    with open(output_file, 'w', encoding='utf-8') as output:
        # Iterate through each .md file and write its content to the output file
        for md_file in md_files:
            md_file_path = os.path.join(folder_path, md_file)
            with open(md_file_path, 'r', encoding='utf-8') as input_file:
                output.write(f'# {md_file}\n\n')  # Add a header for each file
                output.write(input_file.read())
                output.write('\n\n')  # Add extra newline between files

    print(f'Merged {len(md_files)} .md files into {output_file}')

# Call the function with the specified folder path and output file name
merge_md_files(folder_path, output_file)
