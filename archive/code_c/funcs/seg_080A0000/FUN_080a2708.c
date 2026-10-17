// undefined FUN_080a2708(void)
// entry 0x80a2708


undefined4 FUN_080a2708(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 1) != 0) {
    FUN_08006984(0x27);
  }
  uVar1 = FUN_0801fb14(DAT_080a2768,param_1 + 0x54);
  if (0x8000 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar4 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a276c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    return in_lr;
  }
  if ((*puVar4 & 0x200) == 0) {
    if ((*puVar4 & 1) == 0) {
LAB_080a27d8:
      if (*(int *)(param_1 + 0x2c) != 0) {
LAB_080a27de:
        iVar3 = FUN_0802b3e4();
        if (iVar3 == 0) {
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
        if (*(char *)(param_1 + 0xd) != '\0') {
          FUN_08005784(param_1 + 0x74,DAT_080a283c);
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x2c) != 0) goto LAB_080a27de;
      iVar3 = FUN_0802adac(0,param_1,DAT_080a2834);
      *(int *)(param_1 + 0x2c) = iVar3;
      if (iVar3 != 0) {
        if (*(char *)(param_1 + 0xd) != '\0') {
          FUN_08005784(param_1 + 0x74,DAT_080a2838);
        }
        goto LAB_080a27d8;
      }
    }
    if (1 < *(byte *)(param_1 + 0xd)) {
      iVar3 = *(int *)(param_1 + 0xb4);
      if ((iVar3 != 0) && (iVar3 = iVar3 + -1, *(int *)(param_1 + 0xb4) = iVar3, iVar3 == 0)) {
        piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a2840);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
        *(undefined1 *)(param_1 + 0xd) = 2;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        goto LAB_080a282a;
      }
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a285c));
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a27a0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
LAB_080a282a:
    FUN_080a2ac4(param_1);
  }
  return in_lr;
}


