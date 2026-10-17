// undefined FUN_08086fa0(void)
// entry 0x8086fa0


undefined4 FUN_08086fa0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 1) != 0) {
    FUN_08006984(0x37);
  }
  cVar1 = FUN_08007098(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_08087004);
  if (cVar1 == '\0') {
    if ((*puVar4 & 0x200) == 0) {
      iVar3 = FUN_0807f90c(param_1);
      if (iVar3 == 0) {
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080870d0));
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080870d4));
      }
      else {
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080870a0));
        if ((*(char *)(param_1 + 0xb5) != '\0') && (*(char *)(param_1 + 0xd) == '\a')) {
          FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080870a4));
        }
      }
    }
    else {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808703c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      if (*(char *)(param_1 + 0xb7) == '\0') {
        if ((*puVar4 & 0x10000) == 0) {
          *(undefined1 *)(param_1 + 0xd) = 0;
          *(undefined1 *)(param_1 + 0xe) = 0;
          *(undefined1 *)(param_1 + 0xf) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0xd) = 1;
          *(undefined1 *)(param_1 + 0xe) = 0;
          *(undefined1 *)(param_1 + 0xf) = 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 2;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      FUN_08088650(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar4 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08087008);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


