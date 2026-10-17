// undefined FUN_08082538(void)
// entry 0x8082538


undefined4 FUN_08082538(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_080825fa;
  }
  *(undefined1 *)(param_1 + 0xbe) = 0;
  FUN_0801cf00(param_1,0x1600);
  FUN_08005784(param_1 + 0x74,DAT_08082580);
  *(undefined1 *)(param_1 + 0x12) = 0x18;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
    if (iVar4 < 0) {
      iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x28);
    }
    if (0x10000 < iVar4) {
      bVar1 = *(byte *)(param_1 + 10);
      bVar3 = ~(bVar1 >> 4) & 1;
      if (bVar3 == 0) {
LAB_080825d0:
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
LAB_080825d4:
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4c) = bVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
    if (iVar4 < 0) {
      iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x28);
    }
    if (0x4000 < iVar4) {
      bVar1 = *(byte *)(param_1 + 10);
      bVar3 = ~(bVar1 >> 4) & 1;
      if (bVar3 == 0) goto LAB_080825d0;
      bVar1 = bVar1 | 0x10;
      goto LAB_080825d4;
    }
  }
  FUN_08083418(param_1);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080825fa:
  FUN_08083464(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


