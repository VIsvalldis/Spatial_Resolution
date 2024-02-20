void Generated_Spectrum_hist()
{
	TH1F *hist = new TH1F("hist", "Generated spectrum", 11, 0, 200);
	
	//Заполняем (пока что вручную)
	
	
	
	
	hist->SetBinContent(1, 50000*2.346e-6);		//L5
	hist->SetBinContent(2, 50000*3.906e-6);		//L4
	hist->SetBinContent(3, 50000*6.544e-6);		//L3
	hist->SetBinContent(4, 50000*6.511e-6);		//L2
	hist->SetBinContent(5, 50000*1.339e-5);		//L1
	hist->SetBinContent(6, 50000*0.005197);		//fEdep
	hist->SetBinContent(7, 50000*1.139e-5);		//R1
	hist->SetBinContent(8, 50000*4.709e-6);		//R2
	hist->SetBinContent(9, 50000*3.920e-6);		//R3
	hist->SetBinContent(10, 50000*5.097e-6);	//R4
	hist->SetBinContent(11, 50000*1.994e-6);	//R5
	
	TCanvas *c1 = new TCanvas();	
	c1->SetGridx();						//Отрисовываем сетку
	c1->SetGridy();	
	//c1->SetLogy();
	
	//for (int i = 1; i<=11; i++)
	//{
	//	hist->GetXaxis()->SetBinLabel(i, Form("%d", i));
	//}
	
	hist->GetXaxis()->SetTitle("Energy");			//подписываем оси
	hist->GetYaxis()->SetTitle("Number of photons");
	
	hist->Draw();
}
