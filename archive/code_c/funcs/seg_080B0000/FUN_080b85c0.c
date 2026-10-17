// undefined FUN_080b85c0(void)
// entry 0x80b85c0


undefined4 FUN_080b85c0(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar4 + 0x1c);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b85f4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080b8748(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_080b8688)
      {
        FUN_0801cf00(param_1);
      }
    }
    else if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) !=
             DAT_080b86c0) {
      FUN_0801cf00(param_1);
    }
    FUN_0801cff0(param_1);
    if (*(char *)(iVar4 + 0xd6) != '\0') goto LAB_080b8728;
    *(undefined1 *)(param_1 + 0x12) = 0x28;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080b8728;
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_080b8634)
      {
        FUN_0801cf00(param_1);
      }
    }
    else if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != -0x2800) {
      FUN_0801cf00(param_1);
    }
    FUN_0801cff0(param_1);
    if (*(char *)(iVar4 + 0xd6) == '\0') goto LAB_080b8728;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (bVar1 == 2) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_080b8728;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 != 3) goto LAB_080b8728;
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_080b86f8)
      {
        FUN_0801cf00(param_1);
      }
    }
    else if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) !=
             DAT_080b8740) {
      FUN_0801cf00(param_1);
    }
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080b8728;
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0xd) = cVar2;
LAB_080b8728:
  *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + DAT_080b8744;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + 0x2800;
  return in_lr;
}


