// undefined FUN_080a685c(void)
// entry 0x80a685c


undefined8 FUN_080a685c(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar2 = DAT_080a68f0;
  iVar4 = DAT_080a68ec;
  puVar1 = DAT_080a68e8;
  if ((*(int *)(param_1 + 0x2c) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x10) == '\0') && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) {
      uVar3 = *(undefined4 *)(param_1 + 0x54);
      uVar5 = *DAT_080a68e8 * DAT_080a68ec + DAT_080a68f0;
      *DAT_080a68e8 = uVar5 & 0x7fffffff;
      FUN_080d0ff4(uVar3,*(int *)(param_1 + 0x58) + ((uVar5 & 0x7fffffff) >> 0x10 & 0xf) * 0x100,1);
      FUN_080d0ff4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500,1);
      uVar5 = *puVar1 * iVar4 + iVar2;
      *puVar1 = uVar5 & 0x7fffffff;
      FUN_080d0ff4(*(int *)(param_1 + 0x54) + ((uVar5 & 0x7fffffff) >> 0x10 & 0xf) * 0x100,
                   *(undefined4 *)(param_1 + 0x58),0);
    }
    else {
      iVar4 = FUN_0802adac(0,param_1,DAT_080a6914);
      *(int *)(param_1 + 0x2c) = iVar4;
      if (iVar4 != 0) {
        FUN_08005784(param_1 + 0x74,DAT_080a6918);
        uVar3 = 1;
        goto LAB_080a691e;
      }
    }
  }
  uVar3 = 0;
LAB_080a691e:
  return CONCAT44(in_lr,uVar3);
}


