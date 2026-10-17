// undefined FUN_080d0dc4(void)
// entry 0x80d0dc4


undefined8 FUN_080d0dc4(uint param_1,undefined4 *param_2,undefined2 param_3,uint param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080d0e3c);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 1;
    puVar1 = DAT_080d0e40;
    *(undefined1 *)(iVar3 + 9) = 0;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)*puVar1;
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(undefined4 *)(iVar3 + 0x54) = *param_2;
    *(undefined4 *)(iVar3 + 0x58) = param_2[1];
    FUN_0801cdbc(iVar3);
    FUN_0801cf00(iVar3,*(undefined1 *)((param_1 & 0xff) + DAT_080d0e44));
    *(undefined2 *)(iVar3 + 0x50) = param_3;
    *(undefined2 *)(iVar3 + 0x52) = param_3;
    if ((param_4 & 0xff) == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(char *)(iVar3 + 0x4c) = (char)(param_4 & 1);
    pbVar4 = (byte *)(iVar3 + 0x4a);
    *pbVar4 = *pbVar4 & 0xef | (byte)((param_4 & 1) << 4);
    uVar5 = (param_4 & 0xffff) >> 8;
    if (uVar5 == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xdf;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x20;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    uVar5 = uVar5 & 1;
    *(char *)(iVar3 + 0x4d) = (char)uVar5;
    *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar5 << 5);
  }
  return CONCAT44(in_lr,iVar3);
}


