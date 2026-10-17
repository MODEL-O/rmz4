// undefined FUN_0810b62c(void)
// entry 0x810b62c


undefined4 FUN_0810b62c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(iVar3 + DAT_0810b66c);
  if ((((*(char *)(iVar3 + 2) == '\0') || (*(byte *)(iVar3 + 3) < 3)) || (*(byte *)(iVar3 + 3) == 6)
      ) || ((*(char *)(iVar3 + DAT_0810b670) == '\0' ||
            (*(byte *)(iVar3 + 0xdda) <= *(byte *)(param_1 + 0x11))))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  cVar1 = *(char *)(iVar3 + 3);
  uVar2 = DAT_0810b6ec;
  if (cVar1 == '\x03') {
    if (*(char *)(iVar4 + 0xc4) != *(char *)(iVar3 + DAT_0810b69c + (uint)*(byte *)(param_1 + 0x11))
       ) {
      uVar2 = 0x4300;
    }
  }
  else if (cVar1 == '\x04') {
    if (*(char *)(iVar4 + 0xc5) != *(char *)(iVar3 + DAT_0810b6c0 + (uint)*(byte *)(param_1 + 0x11))
       ) {
      uVar2 = 0x4300;
    }
  }
  else {
    if (cVar1 != '\x05') goto LAB_0810b6fa;
    if (*(char *)(iVar4 + 0xc6) != *(char *)(iVar3 + DAT_0810b6e8 + (uint)*(byte *)(param_1 + 0x11))
       ) {
      FUN_0801cf00(param_1,0x4300);
      goto LAB_0810b6fa;
    }
  }
  FUN_0801cf00(param_1,uVar2);
LAB_0810b6fa:
  FUN_0801cff0(param_1);
  return in_lr;
}


