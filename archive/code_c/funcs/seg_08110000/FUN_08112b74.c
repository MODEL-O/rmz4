// undefined FUN_08112b74(void)
// entry 0x8112b74


undefined4 FUN_08112b74(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 in_lr;
  
  puVar6 = (undefined2 *)(param_1 + DAT_08112bf0);
  puVar6[1] = 0;
  uVar2 = DAT_08112bfc;
  puVar3 = (undefined4 *)(DAT_08112bf4 + DAT_08112bf8);
  *(undefined4 *)(DAT_08112bf4 + DAT_08112bf8 + 4) = DAT_08112bfc;
  *puVar3 = uVar2;
  *(undefined2 *)(param_1 + DAT_08112c00) = 1;
  *puVar6 = 0;
  pbVar4 = (byte *)(param_1 + DAT_08112c04);
  FUN_0801e8d8(pbVar4);
  FUN_0801e944(param_1 + 0x6300);
  FUN_08108e04(param_1 + DAT_08112c08);
  FUN_08108f48(param_1 + DAT_08112c0c);
  iVar5 = param_1 + DAT_08112c10;
  FUN_08038034(iVar5);
  cVar1 = *(char *)(DAT_08112c14 + DAT_08112c18);
  if (cVar1 == '\x02') {
    puVar6[1] = 1;
    *pbVar4 = *pbVar4 | 1;
    FUN_080380ec(iVar5);
  }
  else if (cVar1 == '\x03') {
    puVar6[1] = 2;
    *pbVar4 = *pbVar4 | 2;
    FUN_080380f4(iVar5);
  }
  else if (cVar1 == '\0') {
    puVar6[1] = 3;
    *pbVar4 = *pbVar4 | 4;
    FUN_080380fc(iVar5);
  }
  FUN_0801f124(*(undefined1 *)(param_1 + DAT_08112c68));
  FUN_081126ac(param_1,0x300);
  return in_lr;
}


