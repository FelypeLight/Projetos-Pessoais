
from selenium import webdriver
from selenium.webdriver.common.by import By
import time
import random
import string
from selenium.webdriver.edge.options import Options
from selenium.webdriver.support.ui import Select

def get_default_edge_options():
    options = Options()
    options.add_argument("--start-maximized")
    driver = webdriver.Edge(options = options)
    driver.implicitly_wait(0.5)
    driver.get("https://www.roblox.com/")
    
    #SELECIONA O DIA

    dtnascDIA = driver.find_element(By.ID, "DayDropdown")
    dtnascDIA.click()
    time.sleep(2)
    dtnascDiaOPCAO = driver.find_element(By.ID, "DayDropdown")
    dtnascDiaOPCAOESCOLHIDA = Select(dtnascDiaOPCAO)
    dtnascDiaOPCAOESCOLHIDA.select_by_value("01")
    time.sleep(1)

    # SELECIONA O MES
    dtnascMES = driver.find_element(By.ID, "MonthDropdown")
    time.sleep(0.5)
    dtnascMES.click()
    time.sleep(2)
    dtnascMesOPCAO = driver.find_element(By.ID, "MonthDropdown")
    dtnascMesOPCAOESCOLHIDA = Select(dtnascMesOPCAO)
    time.sleep(0.5)
    dtnascMesOPCAOESCOLHIDA.select_by_value("Jul")

    # SELECIONA O ANO
    dtnascANO = driver.find_element(By.ID, "YearDropdown")
    time.sleep(0.5)
    dtnascANO.click()
    time.sleep(2)
    dtnascAnoOPCAO = driver.find_element(By.ID, "YearDropdown")
    time.sleep(1)
    dtnascAnoOPCAOESCOLHIDA = Select(dtnascAnoOPCAO)
    time.sleep(1)
    dtnascAnoOPCAOESCOLHIDA.select_by_value("2000")

    # USUARIO
    NMusuario = driver.find_element(By.ID, "signup-username")
    time.sleep(1)
    NMusuario.send_keys("amareko")
    time.sleep(3)
    
    # VALIDAÇÃO SE O USUÁRIO EXISTE
    
    while True:
                NMemUso = driver.find_elements(By.ID, "signup-usernameInputValidation")
                i = random.randint(0, 9)
                if len(NMemUso) == 0 or NMemUso[0].text == "":
                    break                    
                NMusuario.send_keys(str(i))
                time.sleep(2)
                       
    # SENHA
    
    CampoSenha = driver.find_element(By.ID, "signup-password")
    for i in range(6):
        num = random.randint(0, 9)
        letra = random.choice(string.ascii_letters)
        CampoSenha.send_keys(letra)
        time.sleep(1)
        CampoSenha.send_keys(num)
        time.sleep(2)
            
    # SEXO[
    
    selecaoSEXO = driver.find_element(By.ID, "FemaleButton")
    time.sleep(1)
    selecaoSEXO.click()
    time.sleep(1)

    # CADASTRAR

    btcadastrar = driver.find_element(By.ID, "signup-button")
    time.sleep(1)
    btcadastrar.click()
    time.sleep(20)
    
    

get_default_edge_options()




