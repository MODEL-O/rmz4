// undefined FUN_080f3ff4(void)
// entry 0x80f3ff4


undefined4 FUN_080f3ff4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (((int)(uint)*(byte *)(DAT_080f404c + DAT_080f4050) >> (uint)*(byte *)(param_1 + 0x11) & 1U) !=
      0)) {
    FUN_0801cf00(param_1,CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) +
                         1);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if (*(char *)(DAT_080f404c + DAT_080f4054) != '@') goto LAB_080f40ae;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_080f406c:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto LAB_080f40ae;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080f40ae;
      *(undefined1 *)(param_1 + 0x12) = 0x1f;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_080f406c;
    }
    if (bVar1 != 2) goto LAB_080f40ae;
    if (*(int *)(param_1 + 0x60) <= DAT_080f40e0) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x10;
    }
    iVar5 = *(int *)(param_1 + 0x58) + (*(uint *)(param_1 + 0x60) & 0xff00);
    *(int *)(param_1 + 0x58) = iVar5;
    iVar3 = *(int *)(param_1 + 0x5c) + 0x1e000;
    if (iVar5 <= iVar3) goto LAB_080f40ae;
    *(int *)(param_1 + 0x58) = iVar3;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080f40ae:
  if (DAT_080f40e8 < *(int *)(*DAT_080f40e4 + 0x54)) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f40ec);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080f3f1c(param_1);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


