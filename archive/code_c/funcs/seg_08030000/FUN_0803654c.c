// undefined FUN_0803654c(void)
// entry 0x803654c


undefined4 FUN_0803654c(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_080365ac);
    *(undefined1 *)(param_1 + DAT_080365b0) = 4;
    *pcVar3 = *pcVar3 + '\x01';
  }
  uVar1 = DAT_080365ac;
  FUN_0803a3b0(param_1,DAT_080365ac);
  FUN_0803a3f0(param_1,uVar1);
  cVar2 = *(char *)(param_1 + DAT_080365b0) + -1;
  *(char *)(param_1 + DAT_080365b0) = cVar2;
  if (cVar2 == -1) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cfc8(param_1,DAT_080365b4,2,1);
    }
    else {
      FUN_0801cfc8(param_1,DAT_080365d4,2,1);
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


