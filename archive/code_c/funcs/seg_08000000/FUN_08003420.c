// undefined FUN_08003420(void)
// entry 0x8003420


undefined4 FUN_08003420(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined1 auStack_28 [24];
  
  if (*(int *)(param_1 + 0x204) != 0) {
    FUN_08002c40(auStack_28,*(int *)(param_1 + 0x204),*(undefined4 *)(param_1 + 0x208));
    iVar1 = 0;
    piVar3 = *(int **)(param_1 + 0x200);
    do {
      iVar1 = iVar1 + 1;
      for (piVar2 = (int *)*piVar3; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
        FUN_08128f84(piVar2,auStack_28,piVar2[1]);
      }
      piVar3 = piVar3 + 1;
    } while (iVar1 < 0x80);
  }
  return in_lr;
}


