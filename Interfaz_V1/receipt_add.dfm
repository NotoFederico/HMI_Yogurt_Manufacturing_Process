object ReceiptAdd: TReceiptAdd
  Left = 556
  Top = 63
  Width = 738
  Height = 764
  Caption = 'Agregar Receta'
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
    Width = 730
    Height = 724
    Align = alClient
    Caption = 'Panel1'
    TabOrder = 0
    object Panel2: TPanel
      Left = 1
      Top = 1
      Width = 728
      Height = 79
      Align = alTop
      Color = clSkyBlue
      TabOrder = 0
      object Button1: TButton
        Left = 414
        Top = 17
        Width = 109
        Height = 45
        Caption = 'AGREGAR'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -18
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 581
        Top = 25
        Width = 92
        Height = 29
        Caption = 'CANCELAR'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clInfoText
        Font.Height = -15
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
        OnClick = Button2Click
      end
      object GroupBox1: TGroupBox
        Left = 1
        Top = 1
        Width = 356
        Height = 77
        Align = alLeft
        Caption = 'AGREGAR NOMBRE DE NUEVA RECETA'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -10
        Font.Name = 'MS Sans Serif'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 2
        object Edit71: TEdit
          Left = 12
          Top = 30
          Width = 258
          Height = 24
          TabOrder = 0
        end
      end
    end
    object Panel3: TPanel
      Left = 1
      Top = 80
      Width = 325
      Height = 643
      Align = alLeft
      Caption = 'Panel3'
      TabOrder = 1
      object Panel9: TPanel
        Left = 1
        Top = 1
        Width = 323
        Height = 42
        Align = alTop
        TabOrder = 0
        object Label1: TLabel
          Left = 23
          Top = 10
          Width = 269
          Height = 25
          Align = alCustom
          Caption = 'VARIABLES ANAL'#211'GICAS'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -20
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
        end
      end
      object Panel16: TPanel
        Left = 1
        Top = 43
        Width = 323
        Height = 599
        Align = alClient
        Caption = 'Panel16'
        TabOrder = 1
        object Panel22: TPanel
          Left = 1
          Top = 1
          Width = 321
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          TabOrder = 0
          object Label7: TLabel
            Left = 10
            Top = 9
            Width = 251
            Height = 25
            Align = alCustom
            Caption = 'Temperatura de refrigeraci'#243'n'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel23: TPanel
          Left = 1
          Top = 43
          Width = 321
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          TabOrder = 1
          object Label8: TLabel
            Left = 10
            Top = 9
            Width = 281
            Height = 25
            Align = alCustom
            Caption = 'Temperatura de estandarizaci'#243'n'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel24: TPanel
          Left = 1
          Top = 85
          Width = 321
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          TabOrder = 2
          object Label9: TLabel
            Left = 10
            Top = 9
            Width = 270
            Height = 25
            Align = alCustom
            Caption = 'Temperatura de pasteurizaci'#243'n'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel25: TPanel
          Left = 1
          Top = 127
          Width = 321
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          TabOrder = 3
          object Label10: TLabel
            Left = 10
            Top = 9
            Width = 224
            Height = 25
            Align = alCustom
            Caption = 'Tiempo de pasteurizaci'#243'n'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel26: TPanel
          Left = 1
          Top = 169
          Width = 321
          Height = 41
          Align = alTop
          Color = clGradientInactiveCaption
          TabOrder = 4
          object Label11: TLabel
            Left = 10
            Top = 9
            Width = 301
            Height = 25
            Align = alCustom
            Caption = 'Temperatura de Homogeneizaci'#243'n'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel27: TPanel
          Left = 1
          Top = 210
          Width = 321
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          TabOrder = 5
          object Label12: TLabel
            Left = 10
            Top = 9
            Width = 249
            Height = 25
            Align = alCustom
            Caption = 'Temperatura de pre-enfriado'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel28: TPanel
          Left = 1
          Top = 252
          Width = 321
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          TabOrder = 6
          object Label13: TLabel
            Left = 10
            Top = 9
            Width = 203
            Height = 25
            Align = alCustom
            Caption = 'Tiempo de pre-enfriado'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel29: TPanel
          Left = 1
          Top = 294
          Width = 321
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          TabOrder = 7
          object Label14: TLabel
            Left = 10
            Top = 9
            Width = 238
            Height = 25
            Align = alCustom
            Caption = 'Temperatura de incubaci'#243'n'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel30: TPanel
          Left = 1
          Top = 336
          Width = 321
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          TabOrder = 8
          object Label15: TLabel
            Left = 10
            Top = 9
            Width = 192
            Height = 25
            Align = alCustom
            Caption = 'Tiempo de incubaci'#243'n'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel31: TPanel
          Left = 1
          Top = 378
          Width = 321
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          TabOrder = 9
          object Label16: TLabel
            Left = 10
            Top = 9
            Width = 214
            Height = 25
            Align = alCustom
            Caption = 'Temperatura de enfriado'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel32: TPanel
          Left = 1
          Top = 420
          Width = 321
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          TabOrder = 10
          object Label17: TLabel
            Left = 10
            Top = 9
            Width = 168
            Height = 25
            Align = alCustom
            Caption = 'Tiempo de enfriado'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel33: TPanel
          Left = 1
          Top = 462
          Width = 321
          Height = 41
          Align = alTop
          Color = clInactiveCaptionText
          TabOrder = 11
          object Label18: TLabel
            Left = 10
            Top = 9
            Width = 179
            Height = 25
            Align = alCustom
            Caption = 'Porcentaje de yogurt'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel34: TPanel
          Left = 1
          Top = 503
          Width = 321
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          TabOrder = 12
          object Label19: TLabel
            Left = 10
            Top = 9
            Width = 193
            Height = 25
            Align = alCustom
            Caption = 'Porcentaje de colch'#243'n'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
        object Panel35: TPanel
          Left = 1
          Top = 545
          Width = 321
          Height = 53
          Align = alClient
          Color = clInactiveCaptionText
          TabOrder = 13
          object Label20: TLabel
            Left = 11
            Top = 10
            Width = 194
            Height = 25
            Align = alCustom
            Caption = 'Porcentaje de cubierta'
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -20
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentFont = False
          end
        end
      end
    end
    object Panel4: TPanel
      Left = 326
      Top = 80
      Width = 79
      Height = 643
      Align = alLeft
      Caption = 'Panel4'
      TabOrder = 2
      object Panel10: TPanel
        Left = 1
        Top = 1
        Width = 77
        Height = 42
        Align = alTop
        TabOrder = 0
        object Label2: TLabel
          Left = 22
          Top = 10
          Width = 25
          Height = 25
          Align = alCustom
          Caption = 'LL'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -20
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
        end
      end
      object Panel17: TPanel
        Left = 1
        Top = 43
        Width = 77
        Height = 599
        Align = alClient
        Caption = 'Panel17'
        TabOrder = 1
        object Panel15: TPanel
          Left = 1
          Top = 1
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 0
          object Edit1: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel36: TPanel
          Left = 1
          Top = 43
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          object Edit6: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel37: TPanel
          Left = 1
          Top = 85
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
          object Edit11: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel38: TPanel
          Left = 1
          Top = 127
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
          object Edit16: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel39: TPanel
          Left = 1
          Top = 169
          Width = 75
          Height = 41
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 4
          object Edit21: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel40: TPanel
          Left = 1
          Top = 210
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 5
          object Edit26: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel41: TPanel
          Left = 1
          Top = 252
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 6
          object Edit31: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel42: TPanel
          Left = 1
          Top = 294
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 7
          object Edit36: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel43: TPanel
          Left = 1
          Top = 336
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 8
          object Edit41: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel44: TPanel
          Left = 1
          Top = 378
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 9
          object Edit46: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel45: TPanel
          Left = 1
          Top = 462
          Width = 75
          Height = 41
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 10
          object Edit56: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel46: TPanel
          Left = 1
          Top = 545
          Width = 75
          Height = 53
          Align = alClient
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 11
          object Edit66: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel47: TPanel
          Left = 1
          Top = 420
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 12
          object Edit51: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel48: TPanel
          Left = 1
          Top = 503
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 13
          object Edit61: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
      end
    end
    object Panel5: TPanel
      Left = 405
      Top = 80
      Width = 79
      Height = 643
      Align = alLeft
      Caption = 'Panel5'
      TabOrder = 3
      object Panel11: TPanel
        Left = 1
        Top = 1
        Width = 77
        Height = 42
        Align = alTop
        TabOrder = 0
        object Label3: TLabel
          Left = 30
          Top = 10
          Width = 13
          Height = 25
          Align = alCustom
          Caption = 'L'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -20
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
        end
      end
      object Panel18: TPanel
        Left = 1
        Top = 43
        Width = 77
        Height = 599
        Align = alClient
        Caption = 'Panel17'
        TabOrder = 1
        object Panel19: TPanel
          Left = 1
          Top = 1
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 0
          object Edit2: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel20: TPanel
          Left = 1
          Top = 43
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          object Edit7: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel21: TPanel
          Left = 1
          Top = 85
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
          object Edit12: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel49: TPanel
          Left = 1
          Top = 127
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
          object Edit17: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel50: TPanel
          Left = 1
          Top = 169
          Width = 75
          Height = 41
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 4
          object Edit22: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel51: TPanel
          Left = 1
          Top = 210
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 5
          object Edit27: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel52: TPanel
          Left = 1
          Top = 252
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 6
          object Edit32: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel53: TPanel
          Left = 1
          Top = 294
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 7
          object Edit37: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel54: TPanel
          Left = 1
          Top = 336
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 8
          object Edit42: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel55: TPanel
          Left = 1
          Top = 378
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 9
          object Edit47: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel56: TPanel
          Left = 1
          Top = 462
          Width = 75
          Height = 41
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 10
          object Edit57: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel57: TPanel
          Left = 1
          Top = 545
          Width = 75
          Height = 53
          Align = alClient
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 11
          object Edit67: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel58: TPanel
          Left = 1
          Top = 420
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 12
          object Edit52: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel59: TPanel
          Left = 1
          Top = 503
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 13
          object Edit62: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
      end
    end
    object Panel6: TPanel
      Left = 484
      Top = 80
      Width = 78
      Height = 643
      Align = alLeft
      Caption = 'Panel6'
      TabOrder = 4
      object Panel12: TPanel
        Left = 1
        Top = 1
        Width = 76
        Height = 42
        Align = alTop
        TabOrder = 0
        object Label4: TLabel
          Left = 30
          Top = 10
          Width = 16
          Height = 25
          Align = alCustom
          Caption = 'N'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -20
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
        end
      end
      object Panel60: TPanel
        Left = 1
        Top = 43
        Width = 76
        Height = 599
        Align = alClient
        Caption = 'Panel17'
        TabOrder = 1
        object Panel61: TPanel
          Left = 1
          Top = 1
          Width = 74
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 0
          object Edit3: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel62: TPanel
          Left = 1
          Top = 43
          Width = 74
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          object Edit8: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel63: TPanel
          Left = 1
          Top = 85
          Width = 74
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
          object Edit13: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel64: TPanel
          Left = 1
          Top = 127
          Width = 74
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
          object Edit18: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel65: TPanel
          Left = 1
          Top = 169
          Width = 74
          Height = 41
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 4
          object Edit23: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel66: TPanel
          Left = 1
          Top = 210
          Width = 74
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 5
          object Edit28: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel67: TPanel
          Left = 1
          Top = 252
          Width = 74
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 6
          object Edit33: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel68: TPanel
          Left = 1
          Top = 294
          Width = 74
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 7
          object Edit38: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel69: TPanel
          Left = 1
          Top = 336
          Width = 74
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 8
          object Edit43: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel70: TPanel
          Left = 1
          Top = 378
          Width = 74
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 9
          object Edit48: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel71: TPanel
          Left = 1
          Top = 462
          Width = 74
          Height = 41
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 10
          object Edit58: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel72: TPanel
          Left = 1
          Top = 545
          Width = 74
          Height = 53
          Align = alClient
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 11
          object Edit68: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel73: TPanel
          Left = 1
          Top = 420
          Width = 74
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 12
          object Edit53: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel74: TPanel
          Left = 1
          Top = 503
          Width = 74
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 13
          object Edit63: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
      end
    end
    object Panel7: TPanel
      Left = 562
      Top = 80
      Width = 79
      Height = 643
      Align = alLeft
      Caption = 'Panel7'
      TabOrder = 5
      object Panel13: TPanel
        Left = 1
        Top = 1
        Width = 77
        Height = 42
        Align = alTop
        TabOrder = 0
        object Label5: TLabel
          Left = 30
          Top = 10
          Width = 16
          Height = 25
          Align = alCustom
          Caption = 'H'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -20
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
        end
      end
      object Panel75: TPanel
        Left = 1
        Top = 43
        Width = 77
        Height = 599
        Align = alClient
        Caption = 'Panel17'
        TabOrder = 1
        object Panel76: TPanel
          Left = 1
          Top = 1
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 0
          object Edit4: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel77: TPanel
          Left = 1
          Top = 43
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          object Edit9: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel78: TPanel
          Left = 1
          Top = 85
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
          object Edit14: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel79: TPanel
          Left = 1
          Top = 127
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
          object Edit19: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel80: TPanel
          Left = 1
          Top = 169
          Width = 75
          Height = 41
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 4
          object Edit24: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel81: TPanel
          Left = 1
          Top = 210
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 5
          object Edit29: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel82: TPanel
          Left = 1
          Top = 252
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 6
          object Edit34: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel83: TPanel
          Left = 1
          Top = 294
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 7
          object Edit39: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel84: TPanel
          Left = 1
          Top = 336
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 8
          object Edit44: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel85: TPanel
          Left = 1
          Top = 378
          Width = 75
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 9
          object Edit49: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel86: TPanel
          Left = 1
          Top = 462
          Width = 75
          Height = 41
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 10
          object Edit59: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel87: TPanel
          Left = 1
          Top = 545
          Width = 75
          Height = 53
          Align = alClient
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 11
          object Edit69: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel88: TPanel
          Left = 1
          Top = 420
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 12
          object Edit54: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel89: TPanel
          Left = 1
          Top = 503
          Width = 75
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 13
          object Edit64: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
      end
    end
    object Panel8: TPanel
      Left = 641
      Top = 80
      Width = 88
      Height = 643
      Align = alClient
      Caption = 'Panel8'
      TabOrder = 6
      object Panel14: TPanel
        Left = 1
        Top = 1
        Width = 86
        Height = 42
        Align = alTop
        TabOrder = 0
        object Label6: TLabel
          Left = 22
          Top = 10
          Width = 31
          Height = 25
          Align = alCustom
          Caption = 'HH'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -20
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
        end
      end
      object Panel90: TPanel
        Left = 1
        Top = 43
        Width = 86
        Height = 599
        Align = alClient
        Caption = 'Panel17'
        TabOrder = 1
        object Panel91: TPanel
          Left = 1
          Top = 1
          Width = 84
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 0
          object Edit5: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel92: TPanel
          Left = 1
          Top = 43
          Width = 84
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          object Edit10: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel93: TPanel
          Left = 1
          Top = 85
          Width = 84
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 2
          object Edit15: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel94: TPanel
          Left = 1
          Top = 127
          Width = 84
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 3
          object Edit20: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel95: TPanel
          Left = 1
          Top = 169
          Width = 84
          Height = 41
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 4
          object Edit25: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel96: TPanel
          Left = 1
          Top = 210
          Width = 84
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 5
          object Edit30: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel97: TPanel
          Left = 1
          Top = 252
          Width = 84
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 6
          object Edit35: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel98: TPanel
          Left = 1
          Top = 294
          Width = 84
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 7
          object Edit40: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel99: TPanel
          Left = 1
          Top = 336
          Width = 84
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 8
          object Edit45: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel100: TPanel
          Left = 1
          Top = 378
          Width = 84
          Height = 42
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 9
          object Edit50: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel101: TPanel
          Left = 1
          Top = 462
          Width = 84
          Height = 41
          Align = alTop
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 10
          object Edit60: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel102: TPanel
          Left = 1
          Top = 545
          Width = 84
          Height = 53
          Align = alClient
          Color = clInactiveCaptionText
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 11
          object Edit70: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel103: TPanel
          Left = 1
          Top = 420
          Width = 84
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 12
          object Edit55: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
        object Panel104: TPanel
          Left = 1
          Top = 503
          Width = 84
          Height = 42
          Align = alTop
          Color = clGradientInactiveCaption
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -18
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          TabOrder = 13
          object Edit65: TEdit
            Left = 7
            Top = 5
            Width = 59
            Height = 28
            TabOrder = 0
            Text = '0'
          end
        end
      end
    end
  end
  object Query1: TQuery
    Left = 304
    Top = 32
  end
end
