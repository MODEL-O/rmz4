// undefined FUN_08053eec(void)
// entry 0x8053eec


undefined4 FUN_08053eec(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x57);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_08053fe0 + 0x54);
    uVar5 = (uint)bVar1;
    FUN_0805504c(param_1,4,uVar5);
    FUN_0801cf00(param_1,0x2c00);
    *(bool *)(param_1 + 0x13) = bVar1;
    *(uint *)(param_1 + 0xcc) = *(int *)(param_1 + 0xc0) + (uVar5 * 2 + -1) * 0x7800;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08054fb0(param_1);
  iVar3 = FUN_08055068(param_1,*(undefined4 *)(param_1 + 0xcc));
  iVar7 = *(int *)(param_1 + 100);
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar4 = FUN_08128fb8(iVar6,-iVar7);
  iVar4 = *(int *)(param_1 + 0x54) + ((iVar6 * 2 + -iVar7 * (-iVar4 + 1)) * -iVar4 >> 1);
  if ((((iVar4 - (*(short *)(DAT_08053fe4 + 0x100) * 4 + 0x3600)) - *(int *)(*DAT_08053fe0 + 0x54))
       + 0x1800U < 0x6001) &&
     (((*(int *)(param_1 + 0x58) + *(short *)(DAT_08053fe4 + 0xc0) * 6) -
      *(int *)(*DAT_08053fe0 + 0x58)) + 0x5c00U < 0x6001)) {
    uVar2 = 3;
  }
  else {
    if ((0x6000 < ((iVar4 + *(short *)(DAT_0805404c + 0x100) * 4) - *(int *)(*DAT_08054050 + 0x54))
                  + 0x7e00U) ||
       (0x6000 < ((*(int *)(param_1 + 0x58) + *(short *)(DAT_0805404c + 0xc0) * 6) -
                 *(int *)(*DAT_08054050 + 0x58)) + 0x5c00U)) {
      if ((bool)*(char *)(param_1 + 0x13) !=
          *(int *)(param_1 + 0x54) < *(int *)(*DAT_08054050 + 0x54)) {
        *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 4;
      }
      if (iVar3 != 0) {
        return in_lr;
      }
      FUN_08054ff0(param_1);
      return in_lr;
    }
    uVar2 = 4;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


