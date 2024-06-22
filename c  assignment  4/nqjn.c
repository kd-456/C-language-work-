struct record delete_record(char uid[MAX_LEN])
{
	int i;
	int flag=0;
	//struct record deleted_record;
	//deleted_record.status= -1;
	for (int i=0;i<num_records;i++){
	//while (i<num_records){
	if (cmp_uid(record_arr[i].uid,uid)==0){
	flag=0;
        struct record deleted_record= record_arr[i];
        deleted_record= record_arr[i];
        //flag=0;
        for (int j=i;j<num_records-1;j++){
        record_arr[j]=record_arr[j+1];
        }
        num_records--;
        //}
        //else{
        //i++;                                                                          // SHOWING ERROR 
        //}
        if(num_records<=max_capacity/4){
        size_t new_capacity =max_capacity /2;
        struct record *new_arr= (struct record*)allocate_memory(new_capacity * sizeof( struct record));
        //memcpy(new_arr, record_arr, num_records * sizeof( struct record));
        for(size_t i=0; i<num_records;i++){
	new_arr[i]=record_arr[i];
	}
	free_memory(record_arr);
	//}
	record_arr =new_arr;
	max_capacity=new_capacity;
	//printf("%ld", max_capacity);
	}
	//break;
	return deleted_record;
        }
        if (flag= 1){
        struct record dummy;
	dummy.status=-1;
	return dummy;
	}
        }
}










int i;
	int flag=0;
	for (int i=0;i<num_records;i++){
	if (cmp_uid(record_arr[i].uid,uid)==0){
	flag=0;
	struct record deleted_record= record_arr[i];
        deleted_record= record_arr[i];
	break;
	}
        for (int j=i;j<num_records-1;j++){
        record_arr[j]=record_arr[j+1];
        }
        num_records--;
        //}
        //else{
        //i++;                                                                          // SHOWING ERROR 
        //}
        if(num_records<=max_capacity/4){
        size_t new_capacity =max_capacity /2;
        struct record *new_arr= (struct record*)allocate_memory(new_capacity * sizeof( struct record));
        //memcpy(new_arr, record_arr, num_records * sizeof( struct record));
        for(size_t i=0; i<num_records;i++){
	new_arr[i]=record_arr[i];
	}
	free_memory(record_arr);
	//}
	record_arr =new_arr;
	max_capacity=new_capacity;
	//printf("%ld", max_capacity);
	}
	//break;
	return deleted_record;
        }
        if (flag==1){
        struct record dummy;
	dummy.status=-1;
	return dummy;
	}
        }




int i;
	int flag=0;
	for (int i=0;i<num_records;i++){
	if (cmp_uid(record_arr[i].uid,uid)==0){
	flag=0;
	struct record deleted_record= record_arr[i];
        //deleted_record= record_arr[i];
	break;
	}
        for (int j=i;j<num_records-1;j++){
        record_arr[j]=record_arr[j+1];
        }
        num_records--;
        //}
        //else{
        //i++;                                                                          // SHOWING ERROR 
        //}
        if(num_records<=max_capacity/4){
        size_t new_capacity =max_capacity /2;
        struct record *new_arr= allocate_memory(sizeof( struct record)*new_capacity);
        //memcpy(new_arr, record_arr, num_records * sizeof( struct record));
        for(size_t i=0; i<num_records;i++){
	new_arr[i]=record_arr[i];
	}
	free_memory(record_arr);
	//}
	record_arr =new_arr;
	max_capacity=new_capacity;
	//printf("%ld", max_capacity);
	}
	//break;
	return deleted_record;
        }
		



		size_t get_num_records_with_name_binary(char name[MAX_LEN])
{
	int l=0;
	int h =num_records-1;
	int count=0;
	while(l<=h){
	int mid=(l+h)/2;
	int bsrch= strcmp(record_arr[mid].name, name);
    
	if (bsrch < 0) {
        l = mid + 1; 
        }
        else if (bsrch>0) {
        h = mid - 1;
        }
        else {
        return 0;
        
	}
	count++;
}

}









int bsssearch(struct record* record_arr, char name, int lo, int hi) {
      if (hi < lo)
      return -1;
      int mid = (lo + hi) / 2;
      int b= strcmp(record_arr[mid].name,name);
      if (b==0)
      return mid;
      if (b > 0)
      return bsssearch(record_arr, name, lo, mid-1);
      else
      return bsssearch(record_arr, name, mid+1, hi);
}
size_t get_num_records_with_name_binary(char name[MAX_LEN])
{
        size_t count =0;
        int i;
	bsssearch(record_arr,name,0,num_records-1);
	
	int x=bsssearch;
	if(x=-1){
	return 0;
	}
	else{
	count=1;}
	while(i>=0 && (strcmp(record_arr+i)->name,name)==0){
	count++;
	i--;
	}
	while(i<num_records && (strcmp(record_arr+i)->name,name)==0){
	count++;
	i++;
	}
	return count;
}