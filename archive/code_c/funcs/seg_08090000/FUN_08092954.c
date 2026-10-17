// undefined FUN_08092954(void)
// entry 0x8092954


undefined4 FUN_08092954(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = (uint)(0 < *(int *)(*DAT_080929e0 + 0x54) - *(int *)(param_1 + 0x54));
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar4 * -0x100;
    FUN_0801cf00(param_1,DAT_080929e4);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_18 = *(int *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d0dc4(0,&local_18,0x200,uVar4);
    local_18 = uVar4 * -0xc0 + 0x60;
    local_14 = 0x60;
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_080dc3d0(param_1,param_1 + 0x54,&local_18,0x40,DAT_080929e8,0x18);
    }
    else {
      FUN_080dc458(param_1,param_1 + 0x54,&local_18,0x40,DAT_08092a68,0x18);
    }
    *(int *)(param_1 + 0x5c) = local_18 / 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     (sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar2 != 0)) {
    FUN_080928a4(param_1);
  }
  return in_lr;
}


