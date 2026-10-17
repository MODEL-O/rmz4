// undefined FUN_080365d8(void)
// entry 0x80365d8


undefined4 FUN_080365d8(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_08036634);
    *(undefined1 *)(param_1 + DAT_08036638) = 0x10;
    *pcVar3 = *pcVar3 + '\x01';
  }
  uVar1 = DAT_08036634;
  FUN_0803a3b0(param_1,DAT_08036634);
  FUN_0803a3f0(param_1,uVar1);
  cVar2 = *(char *)(param_1 + DAT_08036638) + -1;
  *(char *)(param_1 + DAT_08036638) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + DAT_0803663c) = 5;
    *pcVar3 = '\0';
  }
  return in_lr;
}


