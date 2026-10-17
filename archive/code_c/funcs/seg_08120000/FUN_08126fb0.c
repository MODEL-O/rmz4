// undefined FUN_08126fb0(void)
// entry 0x8126fb0


undefined4 FUN_08126fb0(undefined4 param_1,int param_2)

{
  uint3 *puVar1;
  int extraout_r1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined8 uVar5;
  
  pcVar2 = *(char **)(param_2 + 0x40);
  if (*pcVar2 == '\0') {
    *(char **)(param_2 + 0x40) = pcVar2 + 1;
  }
  else {
    uVar4 = *(byte *)(param_2 + 3) + 1;
    *(char *)(param_2 + 3) = (char)uVar4;
    uVar3 = uVar4;
    FUN_08126f54();
    param_2 = extraout_r1;
    if (uVar4 <= uVar3) {
      *(undefined1 *)(extraout_r1 + 3) = 0;
      *(char **)(extraout_r1 + 0x40) = pcVar2 + 5;
      return in_lr;
    }
  }
  puVar1 = (uint3 *)(*(int *)(param_2 + 0x40) + 1);
  uVar3 = (uint)*(byte *)puVar1;
  uVar5 = FUN_08126f38((uint)*puVar1 << 8);
  *(uint *)((int)((ulonglong)uVar5 >> 0x20) + 0x40) = (uint)uVar5 | uVar3;
  return in_lr;
}


