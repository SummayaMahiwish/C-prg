pipeline
{
    agent any
    
    stages{
        stage ('build')
        {
            steps{
                git 'https://github.com/SummayaMahiwish/C-prg.git'
                sh 'mvn clean install'}
        }
        stage('deploy')
        {
            steps{
            echo "deploy"}
        }
    }
}
