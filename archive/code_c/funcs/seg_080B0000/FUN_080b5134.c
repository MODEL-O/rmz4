// undefined FUN_080b5134(void)
// entry 0x80b5134


undefined4 FUN_080b5134(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1e00;
    FUN_0801cf00(param_1,0xca00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfb;
    uVar3 = FUN_080e70d4(param_1 + 0x54,0x400,bVar1 >> 4 & 1);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) {
    iVar5 = *(int *)(param_1 + 0x2c);
    *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
    piVar4 = (int *)((uint)*(byte *)(iVar5 + 9) * 4 + DAT_080b51f0);
    *(undefined4 *)(iVar5 + 0xc) = 3;
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
    FUN_08005760(param_1 + 0x74,DAT_080b51f4,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_080b51f8;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else if (*(int *)(*DAT_080b521c + 0x58) < *(int *)(param_1 + 0x58)) {
    iVar5 = *(int *)(*DAT_080b521c + 0x54);
    iVar6 = iVar5 - *(int *)(param_1 + 0x54);
    if (iVar6 < 0) {
      if (DAT_080b5250 < *(int *)(param_1 + 0x54) - iVar5) {
        return in_lr;
      }
    }
    else if (DAT_080b5220 < iVar6) {
      return in_lr;
    }
    iVar5 = *(int *)(param_1 + 0x2c);
    piVar4 = (int *)((uint)*(byte *)(iVar5 + 9) * 4 + DAT_080b5254);
    *(undefined4 *)(iVar5 + 0xc) = 2;
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


