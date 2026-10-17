// undefined FUN_08014720(void)
// entry 0x8014720


undefined4 FUN_08014720(int param_1,int param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (DAT_08014784 < param_1) {
    return in_lr;
  }
  if ((DAT_0801478c < (uint)(param_2 + DAT_08014788)) &&
     (DAT_08014794 < (uint)(param_2 + DAT_08014790))) {
    return in_lr;
  }
  uVar1 = *(undefined2 *)(DAT_08014798 + 0x2c000);
  uVar2 = ((ushort *)(DAT_08014798 + 0x7e0))
          [(uint)*(ushort *)(DAT_08014798 + 0x7e0) * (param_2 + 0x64000 >> 0xc) + (param_1 >> 0xc) +
           2];
  *(ushort *)(DAT_08014798 + DAT_0801479c) = uVar2;
  if (uVar2 == 0xd7) {
    FUN_0801480c(param_1,param_2);
    param_1 = param_1 + 0x1000;
  }
  else if (uVar2 == 0xd8) {
    FUN_0801480c(param_1 + DAT_080147b4,param_2);
  }
  else {
    if ((uVar2 & 1) != 0) {
      FUN_0801480c(param_1 + DAT_08014800,param_2);
      FUN_0801480c(param_1,param_2);
      goto LAB_080147e8;
    }
    FUN_0801480c(param_1,param_2);
    param_1 = param_1 + 0x1000;
  }
  FUN_0801480c(param_1,param_2);
LAB_080147e8:
  iVar3 = DAT_08014804;
  *(undefined2 *)(DAT_08014804 + 0x2c000) = uVar1;
  *(undefined1 *)(iVar3 + DAT_08014808) = 1;
  return in_lr;
}


