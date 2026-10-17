// undefined FUN_080e6a6c(void)
// entry 0x80e6a6c


undefined4 FUN_080e6a6c(int param_1)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(byte *)(param_1 + 0x12) < 0x28) {
    pcVar3 = (char *)(param_1 + 0x74);
    if (*pcVar3 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *pcVar3 = '\x01';
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *pcVar3 = '\0';
    }
  }
  cVar1 = FUN_080e6b44(param_1);
  if (cVar1 != '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e6ad0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


