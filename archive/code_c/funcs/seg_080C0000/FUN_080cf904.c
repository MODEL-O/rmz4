// undefined FUN_080cf904(void)
// entry 0x80cf904


undefined4 FUN_080cf904(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cf990);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  FUN_08005760(param_1 + 0x74,DAT_080cf994,param_1 + 0x54,0x80);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar5 = DAT_080cf998;
  sVar2 = *(short *)(DAT_080cf998 + 0xe0);
  *(int *)(param_1 + 0x5c) = sVar2 * 5;
  sVar3 = *(short *)(iVar5 + 0x60);
  *(int *)(param_1 + 0x60) = sVar3 * 5;
  iVar5 = sVar3 * -0x500;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar5 >> 8;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_080cf8ac(param_1 + 0x54,1,0);
  }
  else {
    iVar5 = sVar2 * -0x500;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 8;
  }
  FUN_0801cf00(param_1,DAT_080cf9c0);
  FUN_080cf9c4(param_1);
  return in_lr;
}


