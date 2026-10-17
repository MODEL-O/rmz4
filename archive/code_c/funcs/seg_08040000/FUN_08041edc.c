// undefined FUN_08041edc(void)
// entry 0x8041edc


undefined8 FUN_08041edc(int param_1,undefined4 param_2,undefined4 *param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_08041f28);
  iVar2 = DAT_08041f88;
  iVar1 = DAT_08041f2c;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0xd;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x34);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_08041f30;
      uVar3 = *DAT_08041f34;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0xd;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x34);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08041f8c + 2);
      uVar3 = *(undefined1 *)(DAT_08041f90 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    uVar5 = param_3[1];
    *(undefined4 *)(iVar4 + 0x54) = *param_3;
    *(undefined4 *)(iVar4 + 0x58) = uVar5;
    *(undefined1 *)(iVar4 + 0x10) = 1;
    *(byte *)(iVar4 + 0x11) = param_4;
    if (param_4 == 0) {
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xef;
    }
    else {
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) | 0x10;
    }
    *(byte *)(iVar4 + 0x4c) = param_4 & 1;
    *(byte *)(iVar4 + 0x4a) = *(byte *)(iVar4 + 0x4a) & 0xef | (param_4 & 1) << 4;
  }
  return CONCAT44(in_lr,iVar4);
}


