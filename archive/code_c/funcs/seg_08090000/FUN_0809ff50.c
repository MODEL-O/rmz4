// undefined FUN_0809ff50(void)
// entry 0x809ff50


undefined4 FUN_0809ff50(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 1) != 0) {
    FUN_08006984(0x29);
  }
  uVar1 = FUN_0801fb14(DAT_0809ffb0,param_1 + 0x54);
  if (0x8000 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar4 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809ffb4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    return in_lr;
  }
  if ((*puVar4 & 0x200) != 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809ffec);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    if (*(char *)(param_1 + 0xb9) == '\0') {
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
    FUN_080a0468(param_1);
    return in_lr;
  }
  if (1 < *(byte *)(param_1 + 0xd)) {
    iVar3 = *(int *)(param_1 + 0xb4);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xb4) = iVar3 + -1;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080a005c:
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 0) goto LAB_080a0070;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 0) {
      iVar3 = FUN_0802adac(0,param_1,DAT_080a0088);
      *(int *)(param_1 + 0x2c) = iVar3;
      if (iVar3 == 0) goto LAB_080a0070;
      if ((*(char *)(param_1 + 0xd) != '\0') && (*(char *)(param_1 + 0xd) != '\x05')) {
        *(undefined1 *)(param_1 + 0xd) = 4;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      goto LAB_080a005c;
    }
  }
  iVar3 = FUN_0802b3e4(iVar3);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_080a0070:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a008c));
  return in_lr;
}


