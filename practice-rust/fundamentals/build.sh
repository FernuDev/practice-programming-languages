#!/bin/bash

# Script para compilar todos los programas de fundamentals

echo "Compilando fundamentals de Rust..."
cargo build --release

if [ $? -eq 0 ]; then
    echo ""
    echo "✓ Compilación exitosa"
    echo ""
    echo "Para ejecutar los programas:"
    echo "  cargo run --release --bin variables"
    echo "  cargo run --release --bin operadores"
    echo "  cargo run --release --bin control_flujo"
    echo "  cargo run --release --bin bucles"
    echo "  cargo run --release --bin funciones"
    echo "  cargo run --release --bin ownership"
    echo "  cargo run --release --bin referencias"
    echo "  cargo run --release --bin structs"
    echo "  cargo run --release --bin enums"
    echo "  cargo run --release --bin strings"
    echo "  cargo run --release --bin colecciones"
    echo "  cargo run --release --bin errores"
    echo "  cargo run --release --bin traits"
    echo ""
    echo "O ejecutar todos:"
    echo "  for bin in variables operadores control_flujo bucles funciones ownership referencias structs enums strings colecciones errores traits; do"
    echo "    echo '=== '\$bin' ==='; cargo run --release --bin \$bin"
    echo "  done"
else
    echo ""
    echo "✗ Error en la compilación"
    exit 1
fi
