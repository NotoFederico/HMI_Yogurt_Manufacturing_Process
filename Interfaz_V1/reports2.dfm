object PrintReportPP: TPrintReportPP
  Left = 408
  Top = 261
  Width = 1325
  Height = 594
  Caption = 'Reporte de porcentajes de materia prima'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  PixelsPerInch = 120
  TextHeight = 16
  object QuickRep1: TQuickRep
    Left = -7
    Top = -6
    Width = 1320
    Height = 2040
    Frame.Color = clBlack
    Frame.DrawTop = False
    Frame.DrawBottom = False
    Frame.DrawLeft = False
    Frame.DrawRight = False
    DataSet = QuerySc.Query1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Arial'
    Font.Style = []
    Functions.Strings = (
      'PAGENUMBER'
      'COLUMNNUMBER'
      'REPORTTITLE')
    Functions.DATA = (
      '0'
      ''
      #39#39)
    Options = [FirstPageHeader, LastPageFooter]
    Page.Columns = 1
    Page.Orientation = poPortrait
    Page.PaperSize = qr11X17
    Page.Values = (
      100
      4318
      100
      2794
      100
      100
      0)
    PrinterSettings.Copies = 1
    PrinterSettings.Duplex = False
    PrinterSettings.FirstPage = 0
    PrinterSettings.LastPage = 0
    PrinterSettings.OutputBin = Auto
    PrintIfEmpty = True
    SnapToGrid = True
    Units = MM
    Zoom = 100
    object ColumnHeaderBand1: TQRBand
      Left = 47
      Top = 127
      Width = 1226
      Height = 50
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Verdana'
      Font.Style = []
      ForceNewColumn = False
      ForceNewPage = False
      ParentFont = False
      Size.Values = (
        105.833333333333
        2595.03333333333)
      BandType = rbColumnHeader
      object QRLabel3: TQRLabel
        Left = 8
        Top = 16
        Width = 51
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          16.9333333333333
          33.8666666666667
          107.95)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Fecha'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel4: TQRLabel
        Left = 152
        Top = 16
        Width = 41
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          321.733333333333
          33.8666666666667
          86.7833333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Hora'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel5: TQRLabel
        Left = 328
        Top = 16
        Width = 57
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          694.266666666667
          33.8666666666667
          120.65)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Yogurt'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel7: TQRLabel
        Left = 502
        Top = 16
        Width = 69
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          1062.56666666667
          33.8666666666667
          146.05)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Colchon'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel10: TQRLabel
        Left = 669
        Top = 16
        Width = 74
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          1416.05
          33.8666666666667
          156.633333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Cubierta'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
    object DetailBand1: TQRBand
      Left = 47
      Top = 177
      Width = 1226
      Height = 64
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Verdana'
      Font.Style = []
      ForceNewColumn = False
      ForceNewPage = False
      ParentFont = False
      Size.Values = (
        135.466666666667
        2595.03333333333)
      BandType = rbDetail
      object QRDBText1: TQRDBText
        Left = 8
        Top = 24
        Width = 59
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          16.9333333333333
          50.8
          124.883333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Color = clWhite
        DataSet = QuerySc.Query1
        DataField = 'FECHA'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText2: TQRDBText
        Left = 152
        Top = 24
        Width = 51
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          321.733333333333
          50.8
          107.95)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Color = clWhite
        DataSet = QuerySc.Query1
        DataField = 'HORA'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRDBText3: TQRDBText
        Left = 344
        Top = 24
        Width = 57
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          728.133333333333
          50.8
          120.65)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Color = clWhite
        DataSet = QuerySc.Query1
        DataField = 'PPYOG'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object TEMPEST: TQRDBText
        Left = 536
        Top = 24
        Width = 55
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          1134.53333333333
          50.8
          116.416666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Color = clWhite
        DataSet = QuerySc.Query1
        DataField = 'PPCOL'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object TEMPPAS: TQRDBText
        Left = 704
        Top = 24
        Width = 57
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          1490.13333333333
          50.8
          120.65)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Color = clWhite
        DataSet = QuerySc.Query1
        DataField = 'PPCUB'
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
    object PageFooterBand1: TQRBand
      Left = 47
      Top = 305
      Width = 1226
      Height = 80
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Verdana'
      Font.Style = []
      ForceNewColumn = False
      ForceNewPage = False
      ParentFont = False
      Size.Values = (
        169.333333333333
        2595.03333333333)
      BandType = rbPageFooter
      object QRLabel9: TQRLabel
        Left = 1088
        Top = 56
        Width = 40
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          2302.93333333333
          118.533333333333
          84.6666666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Hoja'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRSysData2: TQRSysData
        Left = 1280
        Top = 56
        Width = 72
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          2709.33333333333
          118.533333333333
          152.4)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        Color = clWhite
        Data = qrsPageNumber
        Transparent = False
        FontSize = 10
      end
      object QRSysData4: TQRSysData
        Left = 1144
        Top = 56
        Width = 72
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          2421.46666666667
          118.533333333333
          152.4)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        Color = clWhite
        Data = qrsPageNumber
        Transparent = False
        FontSize = 10
      end
    end
    object PageHeaderBand1: TQRBand
      Left = 47
      Top = 47
      Width = 1226
      Height = 40
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Verdana'
      Font.Style = []
      ForceNewColumn = False
      ForceNewPage = False
      ParentFont = False
      Size.Values = (
        84.6666666666667
        2595.03333333333)
      BandType = rbPageHeader
      object QRLabel1: TQRLabel
        Left = 504
        Top = 8
        Width = 179
        Height = 26
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          55.0333333333333
          1066.8
          16.9333333333333
          378.883333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Reporte de datos '
        Color = clWhite
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -23
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 14
      end
      object QRImage1: TQRImage
        Left = 0
        Top = 0
        Width = 49
        Height = 41
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          86.7833333333333
          0
          0
          103.716666666667)
        Picture.Data = {
          0A544A504547496D6167658D170000FFD8FFE000104A46494600010100000100
          010000FFDB00840009060712120F101010131516101710151018151716161716
          15181816161617151617191D2822181A251E151521312225292B2E2E2E172233
          38332D37282D2E2B010A0A0A0505050E05050E2B1913192B2B2B2B2B2B2B2B2B
          2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B
          2B2B2B2B2B2B2B2B2BFFC000110800E100E103012200021101031101FFC4001C
          0000020203010100000000000000000000000206070305080401FFC400491000
          01030203030804080B0803000000000100020304110506210712311322415161
          718191143242522335627274A1B1B30817243353638292C1D1D21534435473A2
          B2C293A3F0FFC40014010100000000000000000000000000000000FFC4001411
          0100000000000000000000000000000000FFDA000C03010002110311003F00BC
          50842010842010842010842010851ACC79F30EA1BB6A2A1BCAFE899F0927716B
          6FBBFB56412542A8310DB24B25C5050BC8D46FCC774761DD1FCD47AAF37E3939
          D6A63807BB1B1B7B7ED5CA0E805F2EB9B65A5AE96E65C42ADD7E8E5246B7CAE0
          2F24994F7FD7926777BEFF006941D3D742E5F66500DF52495BDCEB7D857A63C3
          EBE3FCCE2154DECE564B788BD8A0E9742E79A6CD78F53FAB50D9DA3D991AD3F6
          004F9ADE61FB6B9E221B5F427AB7E23F5D8FF341752144B2E6D230CAD2191543
          5B29D39397E0DE4F50DED1C7B1A4A96A01084201084201084201084201084201
          08420108420108582B2AE38A37492B9AC8DA379CE71B0007492833A87670DA35
          1501319719AABA208B9CE1C3D73C18351C75EC2A079B3695515AE7C1865E2A50
          775D54ED1EFEBE4C7B23B789EC5A7CB5951CF75A1639CF2779D23B5712752E24
          FABDE7541931ACD58A620487C9E8B4E7845113CA387CA70D7CACB0E0593EE408
          612E3EF11BC7BC9E03C4AB4F03C8714403A73BEFF745F77C4F17295C50358035
          8D01A3A00B0415CE1FB3F9080667868EA1CE3F5580FAD6FA9725D333882EEF36
          1E414A0A4283551E054EDE1137CAFF006ACBFD9D10E0C6FEE85ED2A15B56CCF3
          E1D45154538617BAA9909DF171BA6395C6DDB76350491F86C47D86F905E49F03
          85DEC37CADF62D16CB7344D88D1CB3D40687B6A5D10DD16160C8DDE777953028
          2315595623C011DC568EBF29BB5B59C3A8853F2B1B9A8291C6B2546EBEF30B1D
          D6387F24984E64C5F0AB08E43514A3FC392EE007503C5BE1A2B96A68DAE06E14
          7313CBCD372DD3EC41B3C95B54A2AF2D89C7D1EA8E9C9486C1C7F56FE04F61B1
          EC53C5CDF99326B5F7206E49D04702BD993F69F5786BDB4D89074D4DA3449C64
          60EB04FAE3B0EBDA83A110BC985E250D4C4C9E9E46C91385C39A6E0FF23D8BD6
          8042108042108042108042108042160ACAA6451BE491C1AC6B4B8B8E8001A925
          061C63158A9617CF3BC32260B927EC1D67B150B99F314F8C4B77EF4787B5DF07
          0FB5291C1CFEBEEE017DCD19864C5EA77CEF370F8DF68A3E06677E91C3ECEA0A
          6D91F27F2969E716887AADF7BB07537ED41E1C9D929D306BDE37201C2C38F637
          AFE72B4E828238581913435A3CCF693D257A18C000005801600742FA82319F33
          94585C0D9A5648FDE7EE343074F1D5C746E8B4598F6A74B48C8242D9256CC03D
          858006EE1B5DC5C7A6C787D8A4B9DB01657514D4CFF69BCD77BAE1AB5DE05736
          C5148FA7A8C3270454D3B9F2440F1E6DF7D83AEE2E475A0EA68A66BDAD7B082C
          73439A470208B823C10556FB0CCCBE9341E8AF3F0B4F660EB319F50F86A3C159
          05021557FE107F1541F4F8FEE6A15A0555FF008417C5507D3E3FB9A8418FF07F
          F8B2A3E9CFFBA855965567F83FFC5951F4E7FDD42ACB2814AC653948502151DC
          3F36D2D4564F431B9C66889079BCC76EDB7B75C3A89B1BDB50579F68F9985050
          BDED3F0F25E3887512357780D7C96AB64D96BD168FD22507D22A0090DF8B5875
          6B4F69BDCF7A094D75035C0E8A1398B2DB5ED735CDBB7EB6AB15CBC5574C1C10
          52F80639578154EF309928DEEE7C44F35C3AC7BAF1D7E6BA332E63D05753B2A6
          99FBD1B878B4F4B5C3A08555660C11AF6B816DDA788EAED0A0D97B1CA8C0AB83
          DB77D24840923E8737AC753C741F041D4285E4C2B118AA608EA2070744F68735
          C3A8FF0015EB40210840210840210841F0954A6D53333AB2A7FB329DD6A68CEF
          D4BC7B6E1C22BF50E24749B7529D6D4B351A0A1718FF00BCCA791847CA3C5FDC
          D173DF61D2AABC9D8039EF8E117323DDBEF71D4B9C79C4B89E36D494128C8595
          84EF0F7B6D032C2DD7D4C1DA78956DB1800000B002C00E85E7C36859044C8A31
          66B4799E927B4AF4A010841418DE34559670C9B01AD6E216709801A036692383
          9D6D49B69C782B38AD66314A1EC3DC839EB0AAC383E391CA34A595D670E811C8
          6CE1FB06C476003A57476F022E351C6EA8ADA4E0BCA533DC073E1BC83E6FB63C
          B5F0539D8EE65F4CC358C79BCD05A17759681CC77969E08274547B3A6568B12A
          7653CEF7B18D99B303196875C35EDB738116B3CF92DE54C9BAD2555F9D369EEA
          29991B21125C12497EEDAC6D6F54DD04C327655870D81F4F03E47B1D2998990B
          49B96B5B61BA0696605BB2ABED9E6D1DD8954BE9DD4E23DD84CBBC24DEBD9CD6
          DADBA3DEFA9580502948531485045B3464A82BAA69EA2673FE08FE6EE0C6F6DE
          FBA5A785CDAE4711A7748CA7290A04291C98A4283C75B4F70A0F9A7026CB1B9A
          E1A1E07DD3FC9582E5ACC46981074D0A0AEB6479B5F86D69C3AA9DF92CAFB349
          E11C8740E1D4D7703E07AEFD14B99F68380EF34CAD1CF67D6D56A6C57389AFA1
          E46675EAA9ED1BAFC5ECF624EFD0B4F6B6FD282C44210804210805F1C6C17D51
          9DA363BE8586555403F0823DC67FA8FE6334E9B137EE0505459C31635F8BC8F0
          6F4F4B78631D0E92F671F3D3C159FB38C179284D43873DFA34FC9BEA7C4FD815
          55913062F34F0FB4F70738F4DDDC49EE172BA1208831AD63459AD01A3B820D16
          7AC726A2A192A69E074F2B4B4060048009D5EEB6BBA05F82D2E48DA8D1621BB1
          B9DC8549B0E49E459C7E43F83BBB8A9D281676D955157EF4AC6882A4DCF28C00
          35C7ADECE07BC6A827ABE150FD99E098851D3CB0E2151CB5A5DD875DEDD8C0E3
          BC46F6A4FAA6F6DDD14BCA052B1482E2CB21485041734D0D8975B4E9EE55564E
          AFFEC8C7046E36A598888F1B06BCFC1BBBDAED2FD57EB57C6394BBEC3DCA91DA
          5E105D072CD1CF85D7D38EE1363E46C7CD05E589FE6DDDCB9AB69DFDE9BF34FD
          AAE7C8598FD3B0963DC6F2C639193AF79A343E22C5531B4DFEF4DF9A7ED41BBD
          81FC6537D11DF791ABECAA0F609F194DF4477DE46AFB2810A429CAC650294853
          1485029485315A5CD9255368E5750806A001BA08BDC5F9DBA3DEB6A2FD483263
          98E53D247CA5448183A07173BB1ADE256AB2A66A8B116CE63639A23786F387AC
          D23475F85F43A7775A8C607B3792693D2B1695D24A75E4F789EDB39DD5D8DD15
          8D47491C4C6C7131AC8DA2C1AD0001E01047B1AA30E69047007C41E215699631
          5384636C793681CEDC7F518DE789EE363E0AE2C422E95536D330BE60940D586C
          7E69E083A6DAE0402381175F541F6378FF00A66110171BCB0DE95FD6772DB84F
          5DD859AF5DD4E100842100A9EDBB576FC941423DB94CEE1D8CD05FCCAB80AA03
          3D5572F9827EA8206C76E8DE237BFEC104D365B87832C9311A31BBADEF769FF1
          1FEE56528C6CF29772881E973C9F2E68FB149D0084210090A7290A04290A6290
          A0C72B6E08501CD3878BBAE2ED702D23A0822C41F353F2B4B982937D85051991
          2BCE1B8ACB4721F809C72773C2FA989FF596FED762D4ED37FBD37E69FB56E369
          78590C654B347C6E0D71F924F35DE0EB0F1512CCD897A40A794FAC6321DF381D
          504BF609F194DF4477DE46AFA2A85D82FC6537D11DF791ABE4A05290A6290A04
          290A72B1940A5214C52141F108420C354CBB543736510921736DC5A59FC429BB
          C68A3D8BC7CD7766A822FF0083A62663ABACA271F5D82403E546483F5395FAB9
          7726557A2664875B31D3988F6890580F32D5D4480421081643A15CDD0CA65C4F
          1394FF009C733C1AFDD1F5357484DEA9EE5CCF961DBD35538FB55521FADC5074
          3E5A8B768E9DBFAB07CF5FE2B64BCD860B4108FD533FE214433C6D329B0BA864
          13C333DCE8C480B372D6B916E7386BA209C2154BF8FBA1FF002D53E517F5A3F1
          F743FE5AA7CA2FEB416C948546F2367487158A59608E463639046449BB724B77
          AE3749D148CA052B194E5214085619D97042CA521415B672C386EC8D70E639A5
          A7B8AA02B69CC723E33ECB88EFEDFB1751E6FA4DE85C7B173EE2B844B535D1D3
          C0DDE99F70070E173724F00020916C17E329BE88EFBC8D5F25533B27C0A7A2C6
          6782A5BBB27A19768410417C76208E2AE52814A4298A42814A4298A42810A529
          8AD3668C7E3A1A7F4895AE7377DACB32D7BBAF63A91D4836C855CFE38693F413
          FF00EBFEA47E38693F413FFEBFEA416315A6C49BEB0F9256972DED169EB6A5B4
          D1C52B5EE0E3776E586E8BF438ADF62035F041496699B90C5619FDD74337EE38
          7F4AEB361B807B015C97B471F94C7FE97FD9CBAB70E937A085DD7131DE6D0507
          A50842049BD53DCB99B2B0DD9AADA78B6AA41F5B82E9A78D0AE6BA68CC58B627
          11FF0036F93C1CF2E1F5390745E186F0427F54CFF88518CE1B39A3C4A66CF526
          50F6B3931B8E0D16B93D2D3AEAB7D96E5DEA3A777EAC0F2D3F82D920ACBF11B8
          5FBD51FF0091BFD28FC47617EF547FE46FF4AB3505047327650A7C322962A532
          16C8F121DF7071B81BBA5805BD298A42814A4298A42814AC653948506BF1965E
          178EC5CED98313968B128EA202048CDE22E2E0DEE0823A4104AE8CC4BF36EEE5
          CDBB4A65AA9BF34FDA8255B34CD7256638E9AA9C3949295D0B03459A375CD706
          81E055D25724615592413C53C57DF63DAF16EB07878F0F15D59865672D04536E
          96EFC6D7EEB81045C5EC41E05067290A7290A04290A6290A052B5598F028AB60
          F479F7B737DAFE69B1BB6F6D6C7AD6D0AF88207F8A6C3FAE6FDF1FD28FC5361F
          D737EF8FE953C4208A601B3FA4A39DB5109979468701BCE046A2C74B2DB62075
          3DCB6A5697127FAC7B0A0A5768EEFCAA31FA91FF00272EAEC363DD8216F544C1
          E4D01728E6A8B97C563807B4E860FDE23FAD75AC62C00EC010321084015CF59F
          69FD1F31C87D99E26BFB2FBBBB6FF685D0AA98FC20680B1D415CD1EA486171EA
          079C2FE450581B3FA9DFA30DE963CB7CF51F6A92AADF6598902F7C77D248C3DB
          DEDE3F51FF006AB2100BE15F52940A56329CA42810A429CAC650294853148506
          2999704288E339169AA5E1F2C61C4682FD0A605214115C1324D2533F948E1607
          DAD7B5F4B83D3DA029214C52140A5214C52140A56329CA42814AF88420108420
          590E8A3B8B49CD776E8B7B56FB3542F37D788A07BBDD617789D02083E4CA6F4B
          CC90F4B454994F608C5C1F36B57532E7EFC1CF0B325655563BFC38C460FCA90D
          CFD4D5D0280421080517DA5603E9B85D54005E4DCE523F9ECE7340EFB16FED29
          42F8420E71D99E385BC93EFCE89E2FDA3811E2090BA2A19439AD734DDA40703D
          85739E76C2CE178DBC816A6A92656F502E3CE1E0EFB55C1B3CC60490981C79CC
          1BCDED61FE44DBC42096CB206B4B9C435A05C9240000E2493C02AAB396D8A189
          C69B0C67A4D493B81C013187746E81AC87B079A986D0B290C4E905372AE88895
          926F0B90403AB5CDBD9DA136BF02014994722D161CDFC9E3066B58CCFB190F5D
          8FB23B020F1ECD4E2869A4762DF9C7CA648C1DDDF6B48D58E6B459A2E2E071E7
          1EE52D298A42814AC65394850214853958CA05290A6290A052B194E521408521
          4C52140A5214C52141F14773CE27574F4C24A28B9478782FD37B758353CD06E6
          FC34E1AA9121042F2A6D1A96AF7639488673A6EB8F35C7E4BBF81534513CD590
          696B779E1BC9541D794600378FCB6F0777F159326E1151454AE8AA66329DF3B9
          A9218C1A340275D78DBA3820DB6212AA8F69D8ADC36007571E51DF3468D1E26E
          7C15878DD68631C49B0B124F501C555F9570B762F8CB1841316FEFBFA844CE8F
          1D078A0BCB62B807A26110970B4B39354FEBB3AC231FB81A6DD04953C4AC6000
          01A002C07604C8042108042108213B5ACA5FDA187BC462F5315E68BAC9039D1F
          ED0D3BC0553ECEB32B98E6DF49A2362D3A12381047D4BA39507B64CA6FA2AA6E
          2D48D3C8BDF6980E0C79F688E86BBAFAFBC20BC30FAD64D136561BB5C2FDDD60
          F6ACC5549B39CE0D005DDF02FB6F0F71DEF7775AB61AF04020DC1D507C290A72
          B1940A5214C5442973ED3CB8AC98646D7B9EDB8E51A03981CD04BDAEF740E17E
          BD104A8A4298A42810A4298AD266BCCB061F0367A80F2C74A211B8D0E3BC5AF7
          0B82469661FA906D8A42B5195F32C18842E9E9F7F71B2188EFB434EF06B5DC01
          3A59C16D8A052B194E5214085295A19337D30C4061C4BB97B712D2181D60E0CB
          9E24837B8D3B56F5008420A0F8E2B5388D50D7A82F4D6D4D859413386626C111
          75EEE3A31BEF3BAFB8208CED1B1EBFE4EC3CE76AFEC6F437C7FF00B8AB6361F9
          3CD1509A999B6A9A801E41162C8BD861EA27D63DE0742AD3641935F8956BAB6A
          4134D13F7DC48D25938860EB0389F01D2BA50041F508420108420108420160AE
          A364D13E195A1D1BDA58E69D4107420ACE841CC99BF2F4D81575D9BCEA19492C
          7711DB1B8FBC3EB1E2AC7C879D1858D63DD784FAAEE961EA3D9F62B131DC1A1A
          CA7929AA581F13C588E907A1CD3D0E1D05738668CB1598154170BC944E77324E
          823DD78F65FF0051E841D24D7822E0DC2F8554F91B3EB4B036FBD1F4B7DA6777
          58EC56751D7325607C6E041FFED504736939A461F4124A0FC3BFE0A21F288F5B
          B80D547762F95CD3D21AD981F48A81BE09F5846756DEFD2EF5BC949737649A6C
          45F4EFA8DFBC4E0406BB9AE6DC1731CD3A58DB88D548AC00006800B01D5D8814
          A4298A42814AAD36F5F1643F4E8FEEA7565155AEDE7E2C87E9D1FDD4E831EC23
          E2D9FE9AFF00BA8558A5573B08F8B67FA6BFEEA1562940A5214C521415C6D732
          FB9F1B31082E278082E238EE0370EEF69D7C549F26E3EDAEA38E716E52DB9234
          743C71F03C477ADDCD18734B5C016905A41E041D082A3394B29458719CC72BDC
          2475F74E8D6B413BA00E97006C5DD36E841272578AAEAC01A2C3595E003AE8A1
          19A735C7034DCDDC7D560E2EEFEA083D799B30C70C6E7BCE9C001C5E7DD6A816
          5AC0AA71CAF0D176C42C647FB31477E03ADC7A074F705F32E65FADC72AECDD22
          69E7C841E4E26F50EB7750E27B974C655CB7061F4CDA6A66D9A35738FACF774B
          9C7A4A0F560984C5494F1D340DDD898DDD03ED27AC9E24AF7210804210804210
          804210804210805E7C428639E27C3331AF89C375CD70B8217A10839EF3C6C9EA
          6864755E165D2417DE3171962EC1FA46F6F1EFE275595B3FBA3706CA4C720362
          7D93D8E0BA654173BECB68B11DE92DC8551FF163039C7F58CE0EEFD0E9C5061C
          1F3947234729604FB40DDA7F92924554D70BB4823B173EE3592F17C249735A65
          807B71DDEDB7CA6F16A303DA3165849BCC3D6DD5BE20A0E84252155E6139FDAF
          039CC7771DD3E454820CD319E371DE8240542F6A997A7AEA28E0A60D320AA64A
          779C1A374472B4EA7B5ED5BF663911E0E1E698E291FBC3CD046B65B9767A0A39
          61A90D0F754BA501AE0E1BA591B788ED6952F2BC4FC519D63CD7966C6983A420
          D9B8AC2F9405A2A8C7DBD0A3F8AE6F8A3BEFC8D6F65EE7C82098545780B4588E
          38D68249000E249B01E2AB8C5F6837B88185C7DE7E83C1A353F52C183654C5B1
          770706B84248F849399101A6AD1ED7802833E63CF77BB29F9C787287D51F3474
          F7AF7E45D95D5E22F1535A5D153121C5CEFCECA3A980FAA3E51F22ACFC91B21A
          3A12D967FCA6A458873C7C1B08D6EC67583D26E74D2CAC601078705C1E0A485B
          05346D8E268D00E9EB24F493D657B90840210840210840210840210840210840
          21084021084010A2199766B86D7173A5803253FE2C47937DFACDB9AE3F38152F
          420A2318D82CADBBA8AAC3BA9B23775DD8379BA78D828BD5E44C7A949DD8E47B
          474C6F0F1E57B9F25D3E841C9B2E278B43F9D86503E5C0E03CC80B00CF354342
          D8EFF35C3F8AEB82D078A530B7DD1E4107243B3D551E0D8FF75C7FECB2C78BE2
          B37E6A294FFA7039DF634AEB110B7DD1E4138681C020E5BA5C938ED5DAF14C1A
          7A6470601DE2F71E4A4F836C16A1F675654B23EB6C60BDDE66C15FC84108CB7B
          2AC328ECE10F2D28D7949C879BF1B86D83077DAFDAA6CD6802C0582FA8402108
          4021084021084021084021084021084021084021084021084021084021084021
          0840210840210840210840210840210840210840210840210841FFD9}
        Stretch = True
      end
    end
    object SummaryBand1: TQRBand
      Left = 47
      Top = 241
      Width = 1226
      Height = 64
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Verdana'
      Font.Style = []
      ForceNewColumn = False
      ForceNewPage = False
      ParentFont = False
      Size.Values = (
        135.466666666667
        2595.03333333333)
      BandType = rbSummary
      object QRLabel6: TQRLabel
        Left = 0
        Top = 40
        Width = 151
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          0
          84.6666666666667
          319.616666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Total de registros'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel8: TQRLabel
        Left = 960
        Top = 40
        Width = 169
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          2032
          84.6666666666667
          357.716666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Fecha de impresion'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRSysData1: TQRSysData
        Left = 1152
        Top = 40
        Width = 57
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          2438.4
          84.6666666666667
          120.65)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        Color = clWhite
        Data = qrsDate
        Transparent = False
        FontSize = 10
      end
      object QRSysData3: TQRSysData
        Left = 160
        Top = 40
        Width = 121
        Height = 21
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.45
          338.666666666667
          84.6666666666667
          256.116666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        Color = clWhite
        Data = qrsDetailCount
        Transparent = False
        FontSize = 10
      end
    end
    object TitleBand1: TQRBand
      Left = 47
      Top = 87
      Width = 1226
      Height = 40
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Verdana'
      Font.Style = []
      ForceNewColumn = False
      ForceNewPage = False
      ParentFont = False
      Size.Values = (
        84.6666666666667
        2595.03333333333)
      BandType = rbTitle
      object QRLabel2: TQRLabel
        Left = 352
        Top = 8
        Width = 474
        Height = 26
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          55.0333333333333
          745.066666666667
          16.9333333333333
          1003.3)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'Informe de Porcentajes de Materia Prima  [%]'
        Color = clWhite
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -23
        Font.Name = 'Times New Roman'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 14
      end
    end
  end
end
