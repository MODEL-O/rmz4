// undefined FUN_080b6160(void)
// entry 0x80b6160


undefined8 FUN_080b6160(undefined4 param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080b61dc);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_080b61e0;
    *(undefined1 *)(iVar2 + 9) = 0x62;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x188);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0xb5) = param_3;
    psVar4 = (short *)(*(int *)(iVar2 + 0x28) + 0xcc);
    *psVar4 = *psVar4 + 1;
    pbVar5 = (byte *)(*(int *)(iVar2 + 0x28) + 0xce);
    *pbVar5 = (byte)(1 << *(sbyte *)(iVar2 + 0xb5)) | *pbVar5;
  }
  return CONCAT44(in_lr,iVar2);
}


