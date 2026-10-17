// undefined FUN_080b5258(void)
// entry 0x80b5258


undefined4 FUN_080b5258(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar4 = *(int *)(param_1 + 0x2c);
    if (iVar4 != 0) {
      piVar2 = (int *)((uint)*(byte *)(iVar4 + 9) * 4 + DAT_080b531c);
      *(undefined4 *)(iVar4 + 0xc) = 2;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
    FUN_08005760(param_1 + 0x74,DAT_080b5320,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_080b5324;
    *(undefined1 *)(param_1 + 0xb7) = 1;
    *(undefined4 *)(param_1 + 0x60) = DAT_080b5328;
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    FUN_0801cf00(param_1,DAT_080b532c);
    FUN_08002b10(DAT_080b5330);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar4;
  if (((0 < iVar4) && (*(char *)(param_1 + 0xe) == '\x01')) &&
     (sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar5), sVar1 != 0)) {
    uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    FUN_0801cf00(param_1,DAT_080b5334);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


