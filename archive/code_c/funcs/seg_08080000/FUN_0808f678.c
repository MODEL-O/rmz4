// undefined FUN_0808f678(void)
// entry 0x808f678


undefined4 FUN_0808f678(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  iVar3 = DAT_0808f730;
  iVar2 = DAT_0808f72c;
  iVar1 = DAT_0808f728;
  puVar4 = (undefined1 *)(param_1 + 0x70);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar4) +
                                         DAT_0808f72c) * 4 + DAT_0808f728)) * 0x18 + DAT_0808f730);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar4) == DAT_0808f734) {
      FUN_0801cf00(param_1,DAT_0808f734 + 1);
      FUN_0801cff0(param_1);
      FUN_08005784(param_1 + 0x74,
                   (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                    *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar4
                                                            ) + iVar2) * 4 + iVar1)) * 0x18 + iVar3)
      ;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


