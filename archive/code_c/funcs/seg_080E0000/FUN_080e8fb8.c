// undefined FUN_080e8fb8(void)
// entry 0x80e8fb8


undefined4 FUN_080e8fb8(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  ushort *puVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_0801cc9c(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e9050);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
    pcVar7 = (char *)(param_1 + 0x7d);
    if (*(char *)(param_1 + 0x11) == '\x03') {
      *pcVar7 = '\0';
    }
    uVar5 = (uint)*(byte *)(param_1 + 0x11);
    if (uVar5 == 0) {
      if (*(char *)(param_1 + 0x7c) == '\x01') {
        uVar9 = FUN_080e8dd8(*(undefined4 *)(param_1 + 0x28),0x200,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar9;
      }
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 0x28);
      uVar3 = FUN_08129198(*(undefined2 *)(param_1 + 0x74),*(undefined2 *)(uVar5 * 2 + DAT_080e9054)
                          );
      iVar6 = FUN_080e8dd8(uVar9,uVar5 - 1 & 0xffff | 0x100,uVar3);
      *(int *)(param_1 + 0x2c) = iVar6;
      if (iVar6 != 0) {
        *(undefined1 *)(iVar6 + 0x7c) = *(undefined1 *)(param_1 + 0x7c);
      }
    }
    iVar2 = DAT_080e9140;
    iVar6 = DAT_080e90b0;
    if (*pcVar7 == '\0') {
      puVar8 = (ushort *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080e90ac);
      uVar1 = *(ushort *)(param_1 + 0x74);
      if (uVar1 < *puVar8) {
        if (*(byte *)(param_1 + 0x11) == 0) {
          *pcVar7 = '\x01';
          FUN_0801cf00(param_1,*DAT_080e90cc);
        }
        else {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        }
      }
      else {
        uVar5 = FUN_08129120(uVar1,*puVar8);
        FUN_0801cf00(param_1,*(undefined2 *)((uVar5 & 0xffff) * 2 + iVar6));
        *pcVar7 = '\x01';
      }
    }
    else {
      uVar5 = FUN_08129120(*(ushort *)(param_1 + 0x74),
                           *(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080e9144));
      FUN_0801cf00(param_1,*(undefined2 *)((uVar5 & 0xffff) * 2 + iVar2));
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(char *)(*(int *)(param_1 + 0x2c) + 0x7d) = *pcVar7;
    }
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + ((3 - (uint)*(byte *)(param_1 + 0x11)) * 0xf + 0x14) * 0x100 +
         DAT_080e9148;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080e914c;
    *(undefined1 *)(param_1 + 0x12) = 0xb4;
    *(undefined1 *)(param_1 + 0xd) = 1;
    FUN_080e8ebc(param_1);
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


