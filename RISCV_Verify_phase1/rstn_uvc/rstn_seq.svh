class rstn_seq extends uvm_sequence #(rstn_seq_item);
	`uvm_object_utils(rstn_seq)

	rand int unsigned delay;
	rand int unsigned length;

	constraint delay_c{
		delay < 100;
	}

	constraint length_c{
		length < 100;
	}

	function new(string name = "rstn_seq");
		super.new(name);
	endfunction :new

	task body();

		req = rstn_seq_item::type_id::create("req");
		start_item(req);

		if(!(req.randomize()with{
			req.rstn_delay == local::delay;
			req.rstn_length == local::length;
		})) `uvm_fatal(get_name(), "Failed to randomize rstn_seq_item");

		finish_item(req);
		// get_response(rsp,req.get_transaction_id());  // Not needed for reset sequence

	endtask: body

endclass : rstn_seq