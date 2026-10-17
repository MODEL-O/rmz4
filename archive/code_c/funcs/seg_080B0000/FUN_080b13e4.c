// undefined FUN_080b13e4(void)
// entry 0x80b13e4


undefined4 FUN_080b13e4(int param_1)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) ||
     (pcVar3 = (char *)(param_1 + 0xc2), *pcVar3 == -1)) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b143c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined1 *)(param_1 + 0xc2) = 0xff;
    FUN_080b10a8(param_1);
    return in_lr;
  }
  if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (((*(byte *)(DAT_080b1480 + 4) & 0x40) == 0) &&
     (iVar5 = FUN_0801fb14(DAT_080b1484,param_1 + 0x54), iVar5 == 0)) {
    FUN_08006984(0x26);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    bVar1 = *(byte *)(param_1 + 0xc1);
    if (bVar1 < 3) {
      FUN_080b1170(param_1);
      if (*pcVar3 == '\0') {
        if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != -0x4700) {
          FUN_0801cf00(param_1);
        }
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b14d8));
        *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x13);
        cVar2 = *(char *)(param_1 + 0x13) + '\x01';
        *(char *)(param_1 + 0x13) = cVar2;
        if (cVar2 == -1) {
          *(undefined1 *)(param_1 + 0x13) = 0;
        }
      }
      else {
        FUN_0801cf00(param_1,DAT_080b14ec);
        FUN_080b157c(param_1);
      }
      goto LAB_080b14f6;
    }
    *(byte *)(param_1 + 0xc1) = bVar1 + 1;
LAB_080b1502:
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b1518);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  else {
    FUN_080b11b8(param_1);
LAB_080b14f6:
    iVar5 = *(int *)(param_1 + 0x2c);
    if (iVar5 != 0) {
      if (1 < *(byte *)(iVar5 + 0xc)) goto LAB_080b1502;
      if (*(char *)(param_1 + 0x12) == '\0') {
        if (*(char *)(iVar5 + 0x12) != '\0') {
          *(char *)(param_1 + 0x12) = *(char *)(iVar5 + 0x12);
          cVar2 = *(char *)(iVar5 + 0xc2);
          *pcVar3 = cVar2;
          if (cVar2 == '\x0f') {
            FUN_08005784(param_1 + 0x74,DAT_080b1548);
          }
        }
      }
      else if (*(char *)(iVar5 + 0x12) == '\0') {
        *(char *)(iVar5 + 0x12) = *(char *)(param_1 + 0x12);
        *(char *)(*(int *)(param_1 + 0x2c) + 0xc2) = *pcVar3;
        if (*pcVar3 == '\x0f') {
          FUN_08005784(*(int *)(param_1 + 0x2c) + 0x74,DAT_080b1578);
        }
      }
    }
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


