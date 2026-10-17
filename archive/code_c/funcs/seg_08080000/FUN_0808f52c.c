// undefined FUN_0808f52c(void)
// entry 0x808f52c


undefined4 FUN_0808f52c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0xb4) = 2;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0xb6) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0808f5e8) * 4 + DAT_0808f5e4)) * 0x18 + DAT_0808f5ec);
  iVar2 = *(int *)(param_1 + 0xc0);
  if (*(char *)(iVar2 + 0xb6) != '\0') {
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined1 *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_0808f5f0);
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
    *(int *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


