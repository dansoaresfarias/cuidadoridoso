package Cliente;

import java.util.Date;

public  class Cliente {
	
	private int rg; 
	private String cpf;
	private String nome;
	private Date dataNsc;
	private Endereco end;
	
	public Cliente() {
		
	}
	
	
	@SuppressWarnings("deprecation")
	public Cliente(int rg, String cpf, String nome) {
		this.rg = rg;
		this.cpf = cpf;
		this.nome = nome;
		Date d = new Date();
		this.dataNsc = d;
	}
	
}
