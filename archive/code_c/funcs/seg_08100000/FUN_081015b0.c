// undefined FUN_081015b0(void)
// entry 0x81015b0


undefined4 FUN_081015b0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
      *(undefined1 *)(param_1 + 0xf) = 1;
      return in_lr;
    }
    uVar2 = (uint)*(byte *)(param_1 + 0x10);
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xd8 + uVar2) == '\0') {
      bVar1 = true;
    }
    else {
      if ((uVar2 == 1) || (uVar2 == 3)) {
        if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) !=
            DAT_08101660) {
          FUN_0801cf00(param_1);
          FUN_0801cff0(param_1);
        }
      }
      else if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) !=
               DAT_0810169c) {
        FUN_0801cf00(param_1);
        FUN_0801cff0(param_1);
      }
      bVar1 = false;
      iVar4 = *(int *)(param_1 + 0x58) + -0xc0;
      *(int *)(param_1 + 0x58) = iVar4;
      iVar5 = *(int *)(param_1 + 0xb8) + DAT_081016a0;
      if (iVar4 < iVar5) {
        *(int *)(param_1 + 0x58) = iVar5;
      }
    }
  }
  else {
    bVar1 = true;
    if ((*(char *)(param_1 + 0x10) == '\x01') || (*(char *)(param_1 + 0x10) == '\x03')) {
      FUN_0801cf00(param_1,DAT_081015d4);
    }
    else {
      FUN_0801cf00(param_1,0xc000);
    }
    uVar2 = FUN_0801fb14(DAT_08101610,param_1 + 0x54);
    if (0x8000 < uVar2) {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08101614);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_08101728(param_1);
      return in_lr;
    }
  }
  if (bVar1) {
    if ((*(char *)(param_1 + 0x10) == '\x01') || (*(char *)(param_1 + 0x10) == '\x03')) {
      if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_081016d4)
      {
        FUN_0801cf00(param_1);
        FUN_0801cff0(param_1);
      }
    }
    else if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != -0x4000) {
      FUN_0801cf00(param_1);
      FUN_0801cff0(param_1);
    }
    if ((*(char *)(param_1 + 0xf) == '\0') && (*(int *)(param_1 + 0x2c) == 0)) {
      *(undefined1 *)(param_1 + 0x12) = 0x30;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x58) + 0x80;
      *(int *)(param_1 + 0x58) = iVar4;
      if (*(int *)(param_1 + 0xb8) < iVar4) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return in_lr;
}


