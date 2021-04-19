object Alarms1: TAlarms1
  Left = 384
  Top = 317
  Width = 1305
  Height = 473
  Caption = 'Atencion de alarmas'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 120
  TextHeight = 16
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1297
    Height = 433
    Color = 16744576
    TabOrder = 0
    object Label1: TLabel
      Left = 23
      Top = 16
      Width = 678
      Height = 16
      Caption = 
        'Haga click sobre la alarma que desea atender o ingrese el N'#176' de ' +
        'evento asociado a dicha alarma'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object DBGrid1: TDBGrid
      Left = 16
      Top = 80
      Width = 1265
      Height = 337
      DataSource = DataSource1
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -13
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      OnCellClick = DBGrid1CellClick
    end
    object Edit1: TEdit
      Left = 20
      Top = 40
      Width = 1077
      Height = 24
      TabOrder = 1
    end
    object Button2: TButton
      Left = 1115
      Top = 40
      Width = 75
      Height = 25
      Caption = 'Atender'
      TabOrder = 2
      OnClick = Button2Click
    end
    object Button1: TButton
      Left = 1208
      Top = 40
      Width = 75
      Height = 25
      Caption = 'Actualizar'
      TabOrder = 3
      OnClick = Button1Click
    end
  end
  object DataSource1: TDataSource
    DataSet = Query1
    Left = 528
    Top = 152
  end
  object Query1: TQuery
    Left = 568
    Top = 152
  end
end
