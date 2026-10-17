// undefined FUN_08036640(void)
// entry 0x8036640


undefined4 FUN_08036640(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_080366a0);
    *(undefined1 *)(param_1 + DAT_080366a4) = 4;
    *pcVar3 = *pcVar3 + '\x01';
  }
  uVar1 = DAT_080366a0;
  FUN_0803a3b0(param_1,DAT_080366a0);
  FUN_0803a3f0(param_1,uVar1);
  cVar2 = *(char *)(param_1 + DAT_080366a4) + -1;
  *(char *)(param_1 + DAT_080366a4) = cVar2;
  if (cVar2 == -1) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cfc8(param_1,DAT_080366a8,2,1);
    }
    else {
      FUN_0801cfc8(param_1,DAT_080366c8,2,1);
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


