// undefined FUN_080a12f4(void)
// entry 0x80a12f4


undefined4 FUN_080a12f4(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 1) != 0) {
    FUN_08006984(9);
  }
  uVar1 = FUN_0801fb14(DAT_080a1354,param_1 + 0x54);
  if (0x8000 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar4 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a1358);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    return in_lr;
  }
  if ((*puVar4 & 0x200) != 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a1390);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    if (*(char *)(param_1 + 0xbc) == '\0') {
      if ((*puVar4 & 0x10000) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    FUN_080a1600(param_1);
    return in_lr;
  }
  if ((*puVar4 & 1) == 0) {
LAB_080a13e2:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_080a1404;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    iVar3 = FUN_0802adac(0,param_1,DAT_080a141c);
    *(int *)(param_1 + 0x2c) = iVar3;
    if (iVar3 == 0) goto LAB_080a1404;
    if (*(char *)(param_1 + 0xd) != '\0') {
      FUN_08005784(param_1 + 0x74,DAT_080a1420);
    }
    goto LAB_080a13e2;
  }
  iVar3 = FUN_0802b3e4();
  if (iVar3 == 0) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(char *)(param_1 + 0xd) != '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080a1424);
  }
LAB_080a1404:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a1428));
  return in_lr;
}


