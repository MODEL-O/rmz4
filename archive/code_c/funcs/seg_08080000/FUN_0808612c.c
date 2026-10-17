// undefined FUN_0808612c(void)
// entry 0x808612c


undefined4 FUN_0808612c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(0x17);
  }
  if ((*(int *)(param_1 + 0x28) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (((*(ushort *)(DAT_0808617c + 0x14) & 1) == 0) || (*(int *)(param_1 + 0x28) != 0)) {
    uVar4 = *(ushort *)(param_1 + 0xb8) - 1;
    *(ushort *)(param_1 + 0xb8) = (ushort)uVar4;
    iVar3 = (int)(uVar4 * 0x10000) >> 0x10;
    if (iVar3 == 0) {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080861b0);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      *(undefined1 *)(param_1 + 0xd) = 3;
    }
    else {
      if (iVar3 < 0x3c) {
        if ((uVar4 & 1) == 0) {
LAB_080861dc:
          bVar1 = *(byte *)(param_1 + 10) | 1;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) & 0xfe;
        }
LAB_080861e2:
        *(byte *)(param_1 + 10) = bVar1;
      }
      else if (iVar3 < 0xb4) {
        if ((uVar4 & 3) != 0) goto LAB_080861dc;
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
        goto LAB_080861e2;
      }
      if ((*(char *)(param_1 + 0xb7) == '\0') &&
         (puVar5 = (uint *)(param_1 + 0x8c), (*puVar5 & 4) == 0)) {
        if (*(char *)(param_1 + 0xd) == '\x03') {
          uVar4 = FUN_0801fb14(DAT_0808629c,param_1 + 0x54);
          if (0x5000 < uVar4) {
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
            *puVar5 = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined1 *)(param_1 + 0x94) = 0;
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
            piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080862a0);
            *(undefined4 *)(param_1 + 0xc) = 3;
            goto LAB_080862e2;
          }
        }
        else if ((*(char *)(param_1 + 0xd) == '\x04') &&
                (uVar4 = FUN_0801fb14(DAT_080862ec,param_1 + 0x54), 0xf000 < uVar4)) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *puVar5 = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined1 *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080862f0);
          *(undefined4 *)(param_1 + 0xc) = 3;
LAB_080862e2:
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
          return in_lr;
        }
        if ((((*puVar5 & 1) != 0) && (*(int *)(param_1 + 0x2c) == 0)) &&
           (*(char *)(param_1 + 0xd) != '\x04')) {
          iVar3 = FUN_0802adac(0,param_1,DAT_08086334);
          *(int *)(param_1 + 0x2c) = iVar3;
          *(undefined1 *)(param_1 + 0xd) = 4;
          *(undefined1 *)(param_1 + 0xe) = 0;
          *(undefined1 *)(param_1 + 0xf) = 0;
          if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
            *(undefined1 *)(param_1 + 0xe) = 2;
          }
          else if (iVar3 == 0) {
            *(undefined1 *)(param_1 + 0xe) = 0;
            *(undefined1 *)(param_1 + 0xf) = 0;
          }
          else {
            *(undefined1 *)(param_1 + 0xe) = 1;
            *(undefined1 *)(param_1 + 0xf) = 0;
          }
        }
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808636c));
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08086370));
        return in_lr;
      }
      if (*(char *)(param_1 + 0xbc) != '\0') {
        piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08086228);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        goto LAB_08086244;
      }
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808624c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      *(undefined1 *)(param_1 + 0xd) = 2;
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08086180);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
LAB_08086244:
  FUN_0808671c(param_1);
  return in_lr;
}


