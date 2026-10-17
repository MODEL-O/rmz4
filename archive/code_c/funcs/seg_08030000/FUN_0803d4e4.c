// undefined FUN_0803d4e4(void)
// entry 0x803d4e4


undefined4 FUN_0803d4e4(int param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  if (1 < *(byte *)(iVar4 + 0xc)) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803d508);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    return in_lr;
  }
  if (*(byte *)(iVar4 + 0x14e) == 0xff) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    goto LAB_0803d5e4;
  }
  if (*(char *)(param_1 + 0xc4) == '\0') {
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      FUN_08005784(param_1 + 0x74,
                   (uint)*(byte *)((uint)*(byte *)(iVar4 + 0xc3) + DAT_0803d6a8) * 0x18 +
                   DAT_0803d6ac);
    }
    if (*(char *)(param_1 + 0xc3) != '\0') {
      if (*(char *)(param_1 + 0xc3) == '\x02') {
        FUN_080d1bcc(param_1 + 100,6,*(byte *)(param_1 + 10) >> 4 & 1);
        FUN_08002b10(0x2b);
        FUN_0801cf00(param_1,*(short *)((uint)*(byte *)(iVar4 + 0xc3) * 2 + DAT_0803d6b0) + 1);
      }
      cVar1 = *(char *)(param_1 + 0xc3) + -1;
      *(char *)(param_1 + 0xc3) = cVar1;
      if (cVar1 == '\0') {
        FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(iVar4 + 0xc3) * 2 + DAT_0803d6b0));
      }
    }
    FUN_0801cff0(param_1);
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(iVar4 + 0x14e) * 4 + DAT_0803d6b4));
    *(undefined1 *)(param_1 + 0xc1) = 0;
    return in_lr;
  }
  if (*(char *)(iVar4 + 0xc3) == '\x02') {
    FUN_08046910(iVar4,param_1,0);
    FUN_08046910(iVar4,param_1,0x2b);
    FUN_08046910(iVar4,param_1,0x56);
    FUN_08046910(iVar4,param_1,0x80);
    FUN_08046910(iVar4,param_1,0xaa);
    FUN_08046910(iVar4,param_1,0xd5);
  }
  if (*(byte *)(iVar4 + 0xc0) < 3) {
    if (2 < *(byte *)(iVar4 + 0xc1)) {
      *(undefined1 *)(iVar4 + 0xc1) = 2;
      goto LAB_0803d59a;
    }
  }
  else {
    *(undefined1 *)(iVar4 + 0xc0) = 2;
LAB_0803d59a:
    pcVar3 = (char *)(iVar4 + 0xf8);
    cVar1 = *pcVar3;
    if (cVar1 != '\x02') {
      pcVar3 = (char *)(iVar4 + 0xf9);
      cVar1 = *pcVar3;
      if (cVar1 != '\x02') goto LAB_0803d5b0;
    }
    *pcVar3 = cVar1;
  }
LAB_0803d5b0:
  *(undefined1 *)(iVar4 + 0xfa) = 2;
  *(undefined1 *)(iVar4 + 0xe6) = 0;
  FUN_080d0c88(1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
LAB_0803d5e4:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803d600);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  return in_lr;
}


