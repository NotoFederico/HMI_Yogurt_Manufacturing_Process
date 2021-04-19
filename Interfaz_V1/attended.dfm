object Attended1: TAttended1
  Left = 241
  Top = 269
  Width = 1326
  Height = 494
  Caption = 'Alarmas atendidas'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1318
    Height = 454
    Align = alClient
    Caption = 'Panel1'
    Color = clSkyBlue
    TabOrder = 0
    object Label1: TLabel
      Left = 24
      Top = 24
      Width = 217
      Height = 16
      Caption = 'Elija nombre de usuario a filtrar'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 280
      Top = 24
      Width = 41
      Height = 16
      Caption = 'Label2'
      Visible = False
    end
    object DBGrid1: TDBGrid
      Left = 24
      Top = 96
      Width = 1265
      Height = 337
      DataSource = DataSource1
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -13
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
    end
    object ComboBox1: TComboBox
      Left = 24
      Top = 48
      Width = 929
      Height = 24
      ItemHeight = 16
      TabOrder = 1
      Text = 'ComboBox1'
    end
    object Button1: TButton
      Left = 984
      Top = 48
      Width = 137
      Height = 25
      Caption = 'FILTRAR'
      TabOrder = 2
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 1144
      Top = 48
      Width = 137
      Height = 25
      Caption = 'MOSTRAR TODO'
      TabOrder = 3
      OnClick = Button2Click
    end
  end
  object DataSource1: TDataSource
    DataSet = Query1
    Left = 440
    Top = 16
  end
  object Query1: TQuery
    Left = 488
    Top = 16
  end
end
