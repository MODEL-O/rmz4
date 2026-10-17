// undefined FUN_080cc5a0(void)
// entry 0x80cc5a0


undefined4 FUN_080cc5a0(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) +
       *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_080cc5f0) * -0x18;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (*(char *)(iVar4 + 0xd) == '\v') goto LAB_080cc656;
    cVar1 = '\0';
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      if (*(char *)(param_1 + 0x73) == '\x03') {
        piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cc61c);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
        FUN_080cc0bc(param_1);
        return in_lr;
      }
      goto LAB_080cc656;
    }
    iVar4 = *(int *)(param_1 + 100);
    *(int *)(param_1 + 100) = iVar4 + -1;
    if (iVar4 >> 3 != 0) goto LAB_080cc656;
    FUN_0801cf00(param_1,DAT_080cc6a0);
    FUN_0801cff0(param_1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    cVar1 = *(char *)(param_1 + 0xd);
  }
  *(char *)(param_1 + 0xd) = cVar1 + '\x01';
LAB_080cc656:
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cc6a4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


