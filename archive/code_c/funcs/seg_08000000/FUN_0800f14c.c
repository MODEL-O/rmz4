// undefined FUN_0800f14c(void)
// entry 0x800f14c


undefined4 FUN_0800f14c(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar2 = FUN_08129050(*(int *)(*DAT_0800f190 + 0x54) + DAT_0800f194,0x3c000);
  puVar1 = DAT_0800f198;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_0800f198 = (short)DAT_0800f19c;
    puVar1[1] = (short)DAT_0800f1a0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (iVar2 + 0xf000 < 0x20001) {
    puVar3 = (undefined4 *)(DAT_0800f1c0 + DAT_0800f1c4);
    uVar4 = 0x280000;
  }
  else {
    puVar3 = (undefined4 *)(DAT_0800f1a4 + DAT_0800f1a8);
    uVar4 = 0xd7000;
  }
  *puVar3 = uVar4;
  return in_lr;
}


