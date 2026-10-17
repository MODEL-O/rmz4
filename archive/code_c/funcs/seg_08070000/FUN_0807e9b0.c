// undefined FUN_0807e9b0(void)
// entry 0x807e9b0


undefined4 FUN_0807e9b0(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 local_14 [8];
  
  puVar2 = local_14;
  cVar1 = FUN_0807ea9c();
  if (cVar1 == *(char *)(param_1 + 0xbd)) {
    if ((*(ushort *)(DAT_0807e9e8 + 8) & 8) != 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    iVar4 = 0;
    do {
      if (*(char *)(param_1 + 0xc0 + iVar4) == '\0') {
        *puVar2 = 0;
      }
      else {
        *puVar2 = 1;
      }
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 7);
    iVar4 = FUN_0807eb38(local_14,7);
    if (iVar4 != -1) {
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(iVar4 + DAT_0807ea48);
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      pcVar3 = (char *)(param_1 + 0xc0 + iVar4);
      *pcVar3 = *pcVar3 + -1;
      return in_lr;
    }
  }
  else {
    *(char *)(param_1 + 0xbd) = cVar1;
  }
  FUN_0807ea4c(param_1);
  FUN_0807e9b0(param_1);
  return in_lr;
}


