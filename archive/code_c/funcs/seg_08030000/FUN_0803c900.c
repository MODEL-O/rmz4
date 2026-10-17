// undefined FUN_0803c900(void)
// entry 0x803c900


undefined4 FUN_0803c900(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xd) == '\0') {
LAB_0803c96e:
    if (*(byte *)(param_1 + 0x12) < 2) {
      FUN_08005784(param_1 + 0x74,DAT_0803c9d8);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    if ((CONCAT11(*(undefined1 *)(iVar4 + 0x1e),*(undefined1 *)(iVar4 + 0x70)) == 0x1900) &&
       (*(char *)(iVar4 + 0x71) == '\0')) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803c964);
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar3 = *(undefined4 *)(*piVar2 + 0xc);
      goto LAB_0803ca68;
    }
    if (*(char *)(param_1 + 0xd) == '\0') goto LAB_0803c96e;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    FUN_0801cff0(param_1);
    if ('\x03' < *(char *)(param_1 + 0x71)) {
      if (CONCAT11(*(undefined1 *)(iVar4 + 0x1e),*(undefined1 *)(iVar4 + 0x70)) == 0x1900) {
        *(undefined1 *)(param_1 + 0xc1) = 10;
        cVar1 = FUN_0803a4e8(iVar4);
        *(char *)(param_1 + 0xc1) = cVar1 + *(char *)(param_1 + 0xc1);
        *(undefined1 *)(param_1 + 0xc0) = *DAT_0803ca20;
      }
      else {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    FUN_08005794(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0803ca24)),
                 *(undefined1 *)(param_1 + 0xc1),*(undefined1 *)(param_1 + 0xc0),
                 *(undefined1 *)(param_1 + 0xc2),0xffffffff);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) != '\x02') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0803ca74);
    FUN_08005784(param_1 + 0x74,DAT_0803ca78);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803ca7c);
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar3 = *(undefined4 *)(*piVar2 + 8);
LAB_0803ca68:
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}


