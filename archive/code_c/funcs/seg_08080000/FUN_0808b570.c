// undefined FUN_0808b570(void)
// entry 0x808b570


undefined4 FUN_0808b570(int param_1)

{
  int *piVar1;
  ushort uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0808bc98(param_1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0808bcb8(param_1);
  FUN_0808bbd8(param_1);
  pcVar3 = (char *)(param_1 + 0xb9);
  if (*pcVar3 != '\0') {
    *pcVar3 = *pcVar3 + -1;
  }
  piVar1 = DAT_0808b61c;
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) !=
      *(int *)(param_1 + 0x54) < *(int *)(*DAT_0808b61c + 0x54)) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  if (*pcVar3 == '\0') {
    uVar2 = FUN_0807f9d8(param_1,0x3c);
    if ((((*(int *)(*piVar1 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6400U < 0xc801) &&
        ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) !=
         *(int *)(param_1 + 0x54) < *(int *)(*piVar1 + 0x54))) && (uVar2 < 3)) {
      *(undefined1 *)(param_1 + 0xe) = 4;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *pcVar3 = '`';
    }
  }
  return in_lr;
}


