<?php

class bom_cost_type extends dbObject {

 protected static $table_name = "bom_cost_type";
 public static $key_column = 'cost_type';
 public static $primary_column = "bom_cost_type_id";
 public static $module = "bom";
//  data base variables as stored database column name
 public $field_a = [
		 'bom_cost_type_id',
		 'cost_type',
		 'description',
		 'org_id',
		 'status',
		 'multi_org_cb',
		 'default_cost_type',
		 'ef_id',
		 'created_by',
		 'creation_date',
		 'last_update_by',
		 'last_update_date',
 ];
//variables used for showing data
 public $initial_search = [
		 'bom_cost_type_id',
		 'cost_type',
		 'description',
		 'org_id'
 ];
 public $column = [
		 'bom_cost_type_id',
		 'cost_type',
		 'description',
		 'org_id',
		 'status',
		 'multi_org_cb'
 ];
 public $checkbox = [
		 'multi_org_cb',
 ];
 public $requiredField = [
		 'cost_type',
		 'description',
		 'org_id',
		 'multi_org_cb',
 ];
 public $search = [
		 '_update_path' => 'modules/bom/bom_cost_type/bom_cost_type',
		 '_show_update_path' => 1,
		 '_update_action_meassge' => 'Update',
		 '_show_view_path' => 1,
//		 '_view_action_meassge' => 'View',
//		 '_extra_path' => '',
 ];
 public $pageTitle = " Cost Type - Find All Cost Types "; //page Title
 public $option_list = [
//		 'calendar_option_line_code' => 'GL_CALENDAR_NAME',
 ]; //list of search fields which have options
 public $bom_cost_type_id;
 public $cost_type;
 public $description;
 public $org_id;
 public $status;
 public $multi_org_cb;
 public $default_cost_type;
 public $ef_id;
 public $created_by;
 public $creation_date;
 public $last_update_by;
 public $last_update_date;
 public $time;
 public $msg;

 public function _before_showing() {
	
 }

 public function _before_submit() {
	
 }

}

//end of resource class
?>