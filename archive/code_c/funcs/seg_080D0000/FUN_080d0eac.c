// undefined FUN_080d0eac(void)
// entry 0x80d0eac


undefined8 FUN_080d0eac(undefined2 param_1,undefined4 *param_2,byte param_3,byte param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080d0f14);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 1;
    puVar1 = DAT_080d0f18;
    *(undefined1 *)(iVar3 + 9) = 0;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)*puVar1;
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(undefined4 *)(iVar3 + 0x54) = *param_2;
    *(undefined4 *)(iVar3 + 0x58) = param_2[1];
    FUN_0801cc9c(iVar3);
    FUN_0801cf00(iVar3,param_1);
    if (param_3 == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(byte *)(iVar3 + 0x4c) = param_3 & 1;
    pbVar4 = (byte *)(iVar3 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef | (param_3 & 1) << 4;
    if (param_4 == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xdf;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x20;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(byte *)(iVar3 + 0x4d) = param_4 & 1;
    *pbVar4 = *pbVar4 & 0xdf | (param_4 & 1) << 5;
  }
  return CONCAT44(in_lr,iVar3);
}


