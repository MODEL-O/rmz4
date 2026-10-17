// undefined FUN_080ec71c(void)
// entry 0x80ec71c


undefined4 FUN_080ec71c(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  byte abStack_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  
  local_3c = *DAT_080ec7d0;
  uStack_38 = DAT_080ec7d0[1];
  uStack_34 = DAT_080ec7d0[2];
  local_30 = DAT_080ec7d0[3];
  FUN_08129258(abStack_2c,DAT_080ec7d4,4);
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\x04') {
LAB_080ec7b4:
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ec7e4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080ec920(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xb6) != '\0') {
      uVar4 = (uint)*(byte *)(param_1 + 0xb5);
      local_28 = *(undefined4 *)(param_1 + 0xbc);
      local_24 = *(undefined4 *)(param_1 + 0xc0);
      uVar2 = DAT_080ec7dc * *DAT_080ec7d8 + DAT_080ec7e0;
      uVar3 = DAT_080ec7dc * (uVar2 & 0x7fffffff) + DAT_080ec7e0;
      *DAT_080ec7d8 = uVar3 & 0x7fffffff;
      FUN_080e2600(&local_28,uVar4,((uVar2 & 0x7fffffff) >> 0x10 & 0xff) + 0x400,
                   ((uVar3 & 0x7fffffff) >> 0x10 & 7) + 0x9c & 0xff);
      uVar4 = uVar4 + 1;
      if (3 < uVar4) goto LAB_080ec7b4;
      *(char *)(param_1 + 0xb6) = '\0';
      *(byte *)(param_1 + 0xb5) = (byte)uVar4;
      FUN_0801cf00(param_1,*(undefined2 *)(&local_3c + uVar4));
      FUN_08005784(param_1 + 0x74,(uint)abStack_2c[uVar4] * 0x18 + DAT_080ec838);
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080ec83c));
  }
  return in_lr;
}


