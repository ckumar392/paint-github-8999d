1. Kubectl get pod or nodes or service or deployment or replicaset --> get status of the nodes..
2. Kubectl create deployement NAME --image=image # image --> to specify the container image that your deployment will run # we can get these images from docker hub,Google Container Registry,Amazon Elastic Container Registry etc.
3. Kubectl edit deployment NAME # open a configuration file to edit in terminal, after changes the old pod will be deleted and new one is created
4. Kubecrtl logs POD_NAME # we can see the pod name in get pod command
5. Kubectl create deployment DEPLOYMENT_NAME --image=mongo # the --image flag specifies the container image that the pods in that deployment will run. The example with MongoDB is just a generic illustration.
6. kubectl describe pod POD_NAME # shows additional info

## READY 0/1 --> pod is created but the container inside the pod is not running yet

7. kubectl exec -it POD_NAME -- /bin/bash # it is interactive terminal, get s the terminal of that mongodb application container
8. Kubectl delete deployment DEPLOYMENT_NAME or NAME # to delete both the deployment

## it is impractical to use create deployment because of limited configuration when we can use a configuration file to do it, shown below

9. kubectl apply -f FILE_NAME.yaml # this is used for both updation and creation of new configuration file
